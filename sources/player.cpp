#include "player.hpp"
#include <string>

namespace ariel
{
    Player::Player(std::string n) : name(n), cardes_taken(0), stack_size(0) {}

    Player::~Player() {}

    int Player::cardesTaken()
    {
        return this->cardes_taken;
    }

    int Player::stacksize()
    {
        return this->stack_size;
    }

    std::string Player::getName()
    {
        return this->name;
    }
}