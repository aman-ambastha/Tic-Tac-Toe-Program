//
// Created by rkamb on 8/15/2023.
//

#ifndef BOARD_H
#define BOARD_H

class Board{

public:
    void board_print();
    bool board_update(int place, char XO);
    bool draw_check();
    bool winner_check(char XO);
    char * getBoardArray();
    int getSpaces_Filled() const;

private:
    int spaces_filled = 0;
    char board_array[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

};

#endif


