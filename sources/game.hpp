#ifndef GAME_HPP
#define GAME_HPP

#include "player.hpp"

namespace ariel
{
    class Game
    {
    private:
        Player player1;
        Player player2;
        int player1Turns;
        int player2Turns;

    public:
        Game(Player p1, Player p2);
        ~Game();
        void playTurn();
        void playAll();
        void printLastTurn();
        void printWiner();
        void printLog();
        void printStats();
        int getTurn1();
        int getTurn2();
        Player getPLayer1();
        Player getPLayer2();
    };
}
#endif // GAME_HPP