//
// Created by rkamb on 8/16/2023.
//

#include "Player.h"

void Player:: set_player_info(char player_XO){
        // player type is 'X' if parameter is 'X' or 'x'
        if (player_XO == 'X' || player_XO == 'x') {

            // set member variable to 'X'
            this->player_XO = 'X';

            // get player name
            std::cout << "Player selecting " << this->player_XO << ", enter your name: ";
            getline(std::cin, name);
        }

            // player type is 'O' if parameter is any other character
        else {
            this->player_XO = 'O';
            std::cout << "Player selecting " << this->player_XO << ", enter your name: ";
            getline(std::cin, name);
        }
}
std::string Player:: getName() const {
    return name;
}
char Player:: getPlayer_XO() const {
    return player_XO;
}
