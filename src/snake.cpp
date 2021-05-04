/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: game.cpp
 * Author: ahaoozhang
 * Date: 2019-08-09 21:04:46 (星期五)
 * Describe: 
 *************************************************/
#include "snake.h"

bool AHAOAHA::Snake::init() {
    _bg.init(); // background init
    _bg.init_sidebar(); //sidebar init
    _bg.create_food(); //

    //snakebody init
    init_snakebody();

    //echor_init
    init_echor();

    //mover_init
    init_mover();
    return true;
}

bool AHAOAHA::Snake::init_snakebody() {
    //init currst
    srand(time(NULL));
    int st = 0;

    do {
        st = 1 + rand() % 3; //产生0-4的随机数
    } while(st == 0);
    _sn._currst.store(st);

    Pos pos;
    do {
        pos._row = rand() % _bg.get_row();
        pos._col = rand() % _bg.get_col();
    } while(!_bg.pos_ok(pos));
    //init head
    push_snbody(pos);

    //change status
    _st.store(RUN);
    return true;
}

bool AHAOAHA::Snake::push_snbody(const struct Pos& pos) {
    _sn._snbody.push_back(pos);
    _bg.set_snbody(pos);
    return true;
}

bool AHAOAHA::Snake::change_point(int val) {
    _sn._currst.store(val);
    return true;
}

bool AHAOAHA::Snake::exit() {
    GAME_STATUS exp = _st.load();
    _st.store(QUIT);
    SHOW_CURSOR();
    return true;
}

void* AHAOAHA::Snake::echo_handle(void* arg) {
    Snake* self = (Snake*)arg;

    //only STATUS_RUN apply to echo
    GAME_STATUS exp = RUN;
    while(1) {
        while(!self->_st.compare_exchange_strong(exp, ECHOING)) {
            exp = RUN;
        }

        self->_bg.echo();
        self->_st.store(RUN);
        usleep(10000);  //目前屏幕刷新率为1000ms
    }
    return NULL;
}


bool AHAOAHA::Snake::init_echor() {
    //关闭光标显示 在echo退出时打开
    HIDE_CURSOR();

    pthread_create(&_echor_id, NULL, echo_handle, (void*)this);
    pthread_detach(_echor_id);
    return true;
}

void* AHAOAHA::Snake::move_handle(void* arg) {
    Snake* self = (Snake*)arg;

    GAME_STATUS exp = RUN;
    //only STATUS_RUN apply move
    while(1) {
        while(!self->_st.compare_exchange_strong(exp, MOVE)) {
            exp = RUN;
        }

        if(self->move() == false) {
            self->_st.store(QUIT);
            break;
        }
        self->_st.store(RUN);
        usleep(100000);  //snake run level
    }
    return NULL;
}

std::atomic<AHAOAHA::Snake::GAME_STATUS>& AHAOAHA::Snake::get_status() {
    return _st;
}

bool AHAOAHA::Snake::init_mover() {
    //线程控制舍身移动
    pthread_create(&_mover_id, NULL, move_handle, (void*)this);
    pthread_detach(_mover_id);
    return true;
}

//外层已经加锁 该步骤不用加锁
bool AHAOAHA::Snake::move() {
    Pos curr = _sn._snbody.front(); //get head
    Pos next = curr;
    switch(_sn._currst.load()) {
        case Up:
            next._row--;
            break;
        case Down:
            next._row++;
            break;
        case Left:
            next._col--;
            break;
        case Right:
            next._col++;
            break;
        default:
            break;
    }
    if (_bg.is_food(next)) {
        _bg.set_pos(next, SNAKEBODY);
        _sn._snbody.push_front(next);
        _bg.create_food();
    } else if (_bg.is_sidebar(next)) {  //game over
        return false;
    } else {
        _bg.set_pos(next, SNAKEBODY);
        _bg.set_pos(_sn._snbody.back(), EMPTYSPACE);
        _sn._snbody.push_front(next);
        _sn._snbody.pop_back();
    }
    return true;
}

//===================================================================
bool AHAOAHA::Snake::GameRun() {
    char input = '0';
    //控制键盘输入 原子改变方向状态
    disable_terminal_return();
    while(_st.load() != QUIT) {
        int exp_point = get_currpoint();
        // if no input will block
        input = getchar();
        switch(input) {
            case 'w':
            case 'W':
                exp_point = AHAOAHA::Snake::Up;
                break;
            case 's':
            case 'S':
                exp_point = AHAOAHA::Snake::Down;
                break;
            case 'a':
            case 'A':
                exp_point = AHAOAHA::Snake::Left;
                break;
            case 'd':
            case 'D':
                exp_point = AHAOAHA::Snake::Right;
                break;
            case 'q':
            case 'Q':
                    _st.store(QUIT);
                break;

            default:
                break;
        }

        //cas改变状态 no lock
        change_point(exp_point);
    }
    return true;
}

