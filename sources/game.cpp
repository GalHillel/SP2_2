#include "game.hpp"

namespace ariel
{
    Game::Game(Player p1, Player p2) : player1(p1), player2(p2) {}

    Game::~Game() {}

    void Game::playAll() {}

    void Game::playTurn()
    {
        this->player1Turns > this->player2Turns ? this->player2Turns++ : this->player1Turns++;
    }

    void Game::printLastTurn() {}

    void Game::printLog() {}

    void Game::printStats() {}

    void Game::printWiner() {}

    int Game::getTurn1() { return this->player1Turns; }

    int Game::getTurn2() { return this->player2Turns; }

    Player Game::getPLayer1()
    {
        return this->player1;
    }

    Player Game::getPLayer2()
    {
        return this->player2;
    }
}