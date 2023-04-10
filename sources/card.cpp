#include "card.hpp"
#include <iostream>

namespace ariel
{
    Card::Card() : num(1), suit('h') {}

    Card::Card(int Num, char Suit) : num(Num), suit(Suit) {}

    Card::Card(const Card &card) : num(card.num), suit(card.suit) {}

    Card::Card(Card &&other) noexcept
    {
        this->num = other.num;
        this->suit = other.suit;
    }

    Card &Card::operator=(const Card &other)
    {
        if (this != &other)
        {
            this->num = other.num;
            this->suit = other.suit;
        }
        return *this;
    }

    Card &Card::operator=(Card &&other) noexcept
    {
        if (this != &other)
        {
            this->num = other.num;
            this->suit = other.suit;
        }
        return *this;
    }

    int Card::getNum() { return this->num; }

    char Card::getSuit() { return this->suit; }

    std::string Card::toString() { return "Card: " + std::to_string(this->num) + ", " + this->suit + ". "; }

    Card::~Card() {}
}
