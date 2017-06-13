#include "Snake.hpp"

Snake::Snake(void)
{
    this->_snakeLength = 4;
    this->_snakePosition = Point(0, 0);
}

Snake::Snake(const Snake& snake)
{
    *this = snake;
}

Snake::Snake(const int snakeLength)
{
    this->_snakeLength = snakeLength;
    this->_snakePosition = Point(0, 0);
}

Snake::Snake(const Point& point)
{
    this->_snakeLength = 4;
    this->_snakePosition = point;
}

Snake::Snake(const int snakeLength, const Point& point)
{
    this->_snakeLength = snakeLength;
    this->_snakePosition = point;
}

Snake::~Snake(void)
{
    return;
}

Snake&           Snake::operator=(const Snake& snake)
{
    this->_snakeLength = snake.getSnakeLength();
    this->_snakePosition = snake.getSnakePosition();

    return (*this);
}

int             Snake::getSnakeLength(void) const
{
    return (this->_snakeLength);
}

Point           Snake::getSnakePosition(void) const
{
    return (this->_snakePosition);
}

void            Snake::setSnakeLength(const int snakeLength)
{
    this->_snakeLength = snakeLength;
}

void            Snake::setSnakePosition(const Point& snakePosition)
{
    this->_snakePosition = snakePosition;
}

void            Snake::changeDirection(Direction direction)
{
    if (direction == LEFT)
    {
        std::cout << "LEFT" << std::endl;
    }
}

// std::ostream&   operator<<(std::ostream& out, const Snake& snake)
// {

// }