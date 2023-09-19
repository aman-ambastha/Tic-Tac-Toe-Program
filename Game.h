//
// Created by rkamb on 8/16/2023.
//

#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"

class Game {
private:
    Board board;
    Player player1;
    Player player2;
    Player * currentPlayer;
public:
    Game();
    void play();
    Board getBoard() const;
    Player getPlayer1() const;
    Player getPlayer2() const;
    Player * getPlayerCurrent() const;
};

#endif
