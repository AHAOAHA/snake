#include "snake.h"
#include "background.h"
#include "getchar_without_ent.h"
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <atomic>

int main() {
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
    sn.GameRun();
    return 0;
}
