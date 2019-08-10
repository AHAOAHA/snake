/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: game.cpp
 * Author: ahaoozhang
 * Date: 2019-08-10 17:00:44 (星期六)
 * Describe: 
 *************************************************/
#include "game.h"

bool AHAOAHA::GameRun() {
    //screen init
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    unsigned int ROW = w.ws_row - 2;
    unsigned int COL = w.ws_col - 0;

    printf("ROW: %d; COL: %d\n", ROW, COL);

    //game init
    AHAOAHA::Snake sn(ROW, COL);
    sn.init();

    //game run
    printf("\033[2J"); // 清空屏幕
    printf("\033[?25l");    //隐藏光标
    EchoThread(sn.get_background());
    while(sn.get_status() != Snake::QUIT) {
    }

    return true;
}

void* AHAOAHA::EchoHandle(void* arg) {
    if (arg == NULL) {
        assert(0);
    }
    AHAOAHA::BackGround *bg_p = (AHAOAHA::BackGround*)arg;

    while(1) {
        bg_p->echo();
        usleep(1000);
    }
    return NULL;
}

bool AHAOAHA::EchoThread(const AHAOAHA::BackGround& bg) {
    pthread_t id;
    pthread_create(&id, NULL, EchoHandle, (void*)&bg);
    pthread_detach(id);
    return 0;
}
