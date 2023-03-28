#ifndef CARD_HPP
#define CARD_HPP

namespace ariel
{
    enum class Shape
    {
        SPADE,
        HEART,
        CLUB,
        DIAMOND
    };
    enum class Rank
    {
        ACE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    };
    class Card
    {
    private:
        Shape shape;
        Rank rank;

    public:
        Card(Shape s, Rank r);
        ~Card();
        Shape getShape();
        Rank getRank();
    };
}
#endif // CARD_HPP