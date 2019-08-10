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
}

bool AHAOAHA::Snake::init_snakebody() {
    //init currst
    srand(time(NULL));
    int st = 0;

    do {
        st = 1 + rand() % 3; //产生0-4的随机数
    } while(st == 0);
    _sn._currst = st;

    Pos pos;
    do {
        pos._row = rand() % _bg.get_row();
        pos._col = rand() % _bg.get_col();
        printf("x");
    } while(!_bg.pos_ok(pos));
    //init head
    push_snbody(pos);
}

bool AHAOAHA::Snake::push_snbody(const struct Pos& pos) {
    _sn._snbody.push_back(pos);
    _bg.push_snbody(pos);
    return true;
}
