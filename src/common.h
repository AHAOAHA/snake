/*************************************************
 * Copyright(C) 2016-2019. All right reserved.
 * 
 * Filename: Common.h
 * Author: ahaoozhang
 * Date: 2019-08-10 16:02:01 (星期六)
 * Describe: 
 *************************************************/

#ifndef __COMMON_H__
#define __COMMON_H__

namespace AHAOAHA {
    struct Pos {
        Pos(unsigned int row = 0, unsigned int col = 0) 
            : _row(row)
              , _col(col)
        {}

        unsigned int _row;    //行
        unsigned int _col;    //列
    };
}

#endif // common.h
