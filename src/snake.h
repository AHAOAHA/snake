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
#include "getchar_without_ent.h"
#include "common.h"
#include <list>
#include <time.h>
#include <atomic>
#include <unistd.h>


namespace AHAOAHA {

    class Snake {
        private:
            struct SnBody {
                std::atomic<int> _currst;    //当前状态
                std::list<Pos> _snbody; //蛇身链表
            };

        private:
            bool move();
            bool init_snakebody();
            bool push_snbody(const struct Pos& pos);
            static void* echo_handle(void* arg);
            bool init_echor();
            static void* move_handle(void* arg);
            bool init_mover();

        public:
            static const int Up = 1;
            static const int Down = 2;
            static const int Left = 3;
            static const int Right = 4;

            enum GAME_STATUS {
                BEGIN,
                RUN,
                CHANGE_POINT,
                MOVE,
                ECHOING,
                QUIT
            };

        public:
            Snake(unsigned int row, unsigned int col)
                :_bg(row, col), _st(BEGIN), _echor_id(0), _mover_id(0)
            {}
            ~Snake() {}


            bool init();
            //const GAME_STATUS& get_status() { return _st.load(); }
            BackGround& get_background() { return _bg; }
            int get_currpoint() { return _sn._currst; }
            bool change_point(int val);
            bool exit();
            bool GameRun();
            std::atomic<GAME_STATUS>& get_status();

        private:
            BackGround _bg;
            SnBody _sn;
            std::atomic<GAME_STATUS> _st;
            pthread_t _echor_id;
            pthread_t _mover_id;
    };
}

#endif // snake.h
