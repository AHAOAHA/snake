/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: background.h
 * Author: ahaoozhang
 * Date: 2019-08-09 20:59:00 (星期五)
 * Describe: 
 *************************************************/

#ifndef __BACKGROUND_H__
#define __BACKGROUND_H__
#include <vector>
#include <iostream>
#include "common.h"

namespace AHAOAHA { //

    class BackGround {
        private:
        public:
            BackGround(unsigned int row, unsigned int col): _row(row), _col(col) {}
            ~BackGround() {}

            bool init();
            bool init_sidebar();
            bool create_food();
            bool echo();
            bool push_snbody(const struct Pos& pos);
            unsigned int get_row() const { return _row; }
            unsigned int get_col() const { return _col; }

            bool pos_ok(const struct Pos& pos);
        private:
            const unsigned int _row;
            const unsigned int _col;
            std::vector<std::vector<int>> _bgv;
    };
}

#endif // background.h
