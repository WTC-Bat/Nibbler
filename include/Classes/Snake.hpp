#ifndef SNAKE_HPP
# define SNAKE_HPP

# include <iostream>
# include "Point.hpp"

class Snake
{
    private:
        /* Fields */
        int     _snakeLength;
        Point   _snakePosition;

    public:
        /* Constructors */
        Snake(void);
        Snake(const Snake& snake);
        Snake(const int snakeLength);
        Snake(const Point& point);
        Snake(const int snakeLength, const Point& point);

        /* Destructors */
        ~Snake(void);

        enum Direction
        {
            UP,
            DOWN,
            LEFT,
            RIGHT
        };

        /* Operator Overloads */
        Snake&  operator=(const Snake& snake);

        /* Getters */
        int     getSnakeLength(void) const;
        Point   getSnakePosition(void) const;

        /* Setters */
        void    setSnakeLength(const int length);
        void    setSnakePosition(const Point& position);

        /* Member Functions */
        void    changeDirection(Direction direction);
};

// std::ostream&   operator<<(std::ostream& out, const Snake& snake);

#endif