#include "card.hpp"

namespace ariel
{
    Card::Card(Shape s, Rank r) : shape(s), rank(r) {}

    Card::~Card() {}

    Rank Card::getRank()
    {
        return this->rank;
    }

    Shape Card::getShape()
    {
        return this->shape;
    }
}