#include "Point.hpp"

Point::Point(void)
{
    this->_x = 0;
    this->_y = 0;
}

Point::Point(const Point& point)
{
    *this = point;
}

Point::Point(int x, int y)
{
    this->_x = x;
    this->_y = y;
}

Point::~Point(void)
{
    return ;
}


Point   Point::operator+(const Point& point)
{
    int x;
    int y;

    x = (this->_x + point.getX());
    y = (this->_y + point.getY());

    return (Point(x, y));
    // return (this);
}

Point   Point::operator-(const Point& point)
{
    int x;
    int y;

    x = (this->_x - point.getX());
    y = (this->_y - point.getY());

    return (Point(x, y));
    // return (this);
}

Point   Point::operator*(const Point& point)
{
    int x;
    int y;

    x = (this->_x * point.getX());
    y = (this->_y * point.getY());

    return (Point(x, y));
    // return (this);
}

Point   Point::operator/(const Point& point)
{
    int x;
    int y;

    x = (this->_x / point.getX());
    y = (this->_y / point.getY());

    return (Point(x, y));
    // return (this);
}

Point&  Point::operator=(const Point& point)
{
    this->_x = point.getX();
    this->_y = point.getY();

    return (*this);
}

bool    Point::operator==(const Point& point)
{
    if (this->_x == point.getX() && this->_y == point.getY())
        return (true);
    return (false);
}

// std::ostream& operator<<(std::ostream& ostr, const Point& point)
// {

// }


/* Getters */
int     Point::getX(void) const
{
    return (this->_x);
}

int     Point::getY(void) const
{
    return (this->_y);
}

/* Setters */
void    Point::setX(const int x)
{
    this->_x = x;
}

void    Point::setY(const int y)
{
    this->_y = y;
}
