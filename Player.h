//
// Created by rkamb on 8/16/2023.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
private:
    std::string name;
    char player_XO;
public:
    void set_player_info(char player_XO);
    std::string getName() const;
    char getPlayer_XO() const;
};

#endif
