/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: game.h
 * Author: ahaoozhang
 * Date: 2019-08-10 16:59:53 (星期六)
 * Describe: 
 *************************************************/

#ifndef __GAME_H__
#define __GAME_H__
#include "background.h"
#include "getchar_without_ent.h"
#include <sys/ioctl.h>
#include "snake.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

namespace AHAOAHA {
    bool GameRun();
    bool EchoThread(const BackGround& bg);
    void* EchoHandle(void* arg);
}

#endif // game.h
