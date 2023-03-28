#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

namespace ariel
{
    class Player
    {
    private:
        std::string name;
        int cardes_taken;
        int stack_size;

    public:
        Player(std::string n);
        ~Player();
        int cardesTaken();
        int stacksize();
        std::string getName();
    };
}

#endif // PLAYER_HPP