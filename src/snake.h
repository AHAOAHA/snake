/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: game.h
 * Author: ahaoozhang
 * Date: 2019-08-09 21:05:29 (星期五)
 * Describe: 
 *************************************************/

#ifndef __SNAKE_H__
#define __SNAKE_H__

#include "background.h"
#include "common.h"
#include <list>
#include <time.h>



namespace AHAOAHA {

    class Snake {
        private:

            const int Up = 1;
            const int Down = 2;
            const int Left = 3;
            const int Right = 4;

        private:

            struct SnBody {
                int _currst;    //当前状态
                std::list<Pos> _snbody; //蛇身链表
            };

        private:
            bool init_snakebody();
            bool push_snbody(const struct Pos& pos);

        public:
            enum GAME_STATUS {
                RUN,
                QUIT
            };

        public:
            Snake(unsigned int row, unsigned int col)
                :_bg(row, col), _st(RUN)
            {}
            ~Snake() {}


            bool init();
            const GAME_STATUS& get_status() const { return _st; }
            BackGround& get_background() { return _bg; }

        private:
            BackGround _bg;
            SnBody _sn;
            GAME_STATUS _st;
    };
}

#endif // snake.h
