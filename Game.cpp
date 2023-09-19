//
// Created by rkamb on 8/16/2023.
//

#include "Game.h"

Game::Game(){
    player1.set_player_info('X');
    player2.set_player_info('O');
    currentPlayer = &player1;
}
void Game :: play(){
    int place;

    // message to prompt player for their position
    std::string message_user = "Please Enter The Place (1 - 9): ";

    // using an infinite loop to run the game
    // we will later add conditions to terminate the loop
    while (true) {

        std::cout << currentPlayer->getName() << " " << message_user;
        std::cin >> place;

        // the update_board() function returns true if
        // the user selected position is not already filled
        bool update = board.board_update(place, currentPlayer->getPlayer_XO());

        // update the board if the selected position is not filled
        if (update) {

            board.board_print();

            // call the check_winner() function
            bool win_status = board.winner_check(currentPlayer->getPlayer_XO());

            // call the check_draw() function
            bool draw_status = board.draw_check();

            // check for winner each time after updating the board
            if (win_status) {
                std::cout << currentPlayer->getName() << " wins!" << std::endl;
                break;
            }

                // check for draw each time after updating the board
            else if (draw_status) {
                std::cout << "Game is a draw!" << std::endl;
                break;
            }

            // change current player when board is updated
            if (currentPlayer == &player1) {
                currentPlayer = &player2;
            }

            else {
                currentPlayer = &player1;
            }
        }
    }
}

Board Game :: getBoard() const{
    return board;
}
Player Game :: getPlayer1() const{
    return player1;
}
Player Game :: getPlayer2() const{
    return player2;
}
Player * Game :: getPlayerCurrent() const{
    return currentPlayer;
}