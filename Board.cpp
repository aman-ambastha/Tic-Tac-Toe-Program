//
// Created by rkamb on 8/15/2023.
//

#include "Board.h"
#include <iostream>

void Board::board_print() {
    std::cout << " " << board_array[0] << " | " << board_array[1] << " | " << board_array[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board_array[3] << " | " << board_array[4] << " | " << board_array[5] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board_array[6] << " | " << board_array[7] << " | " << board_array[8] << std::endl;
}

bool Board::board_update(int place, char XO) {
    if (board_array[place - 1] == ' ') {
        board_array[place - 1] = XO;

        // increase the value of count by 1
        spaces_filled++;
        return true;
    }

        // if the position is already filled, ask user to select another position
    else {
        std::cout << "Place Already Filled. Please Select Another Place" << std::endl;
        return false;
    }
}

bool Board::draw_check() {
    if (spaces_filled == 9) {
        return true;
    }
    else {
        return false;
    }
}

bool Board:: winner_check(char XO) {
    if (board_array[0] == XO && board_array[1] == XO && board_array[2] == XO){
        return true;
    }
    else if (board_array[3] == XO && board_array[4] == XO && board_array[5] == XO){
       return true;
    }
    else if (board_array[6] == XO && board_array[7] == XO && board_array[8] == XO) {
        return true;
    }
    else if(board_array[0] == XO && board_array[3] == XO  && board_array[6] == XO) {
        return true;
    }
    else if (board_array[1] == XO && board_array[4] == XO && board_array[7] == XO) {
        return true;
    }
    else if (board_array[2] == XO && board_array[5] == XO && board_array[8] == XO) {
        return true;
    }
    else if (board_array[0] == XO && board_array[4] == XO && board_array[8] == XO) {
        return true;
    }
    else if (board_array[2] == XO && board_array[4] == XO && board_array[6] == XO) {
        return true;
    }
    else {
        return false;
    }
}
char * Board:: getBoardArray() {
    return board_array;
}

int Board:: getSpaces_Filled() const {
    return spaces_filled;
}
