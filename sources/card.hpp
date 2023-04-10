#ifndef CARD_H
#define CARD_H

#include <string>

namespace ariel
{
    class Card
    {
    private:
        int num;
        char suit;

    public:
        Card();
        Card(int num, char suit);
        Card(const Card &other);
        Card(Card &&other) noexcept;
        Card &operator=(const Card &other);
        Card &operator=(Card &&other) noexcept;
        ~Card();
        int getNum();
        char getSuit();
        std::string toString();
    };
}

#endif