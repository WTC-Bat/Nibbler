#ifndef POINT_HPP
# define POINT_HPP

//#include

class Point
{
    private:
        /* Fields */
        int     _x;
        int     _y;

    public:
        /* Constructors */
        Point(void);
        //The & may need to be beside the parameter name, and not it's type.
        // Same goes for "Point.cpp"
        Point(const Point& point);
        Point(int x, int y);

        /* Destructors */
        ~Point(void);

        /* Operator Overloads */
        Point   operator+(const Point& point);
        Point   operator-(const Point& point);
        Point   operator*(const Point& point);
        Point   operator/(const Point& point);
        Point&  operator=(const Point& point);
        bool    operator==(const Point& point);

        /* Getters */
        int     getX(void) const;
        int     getY(void) const;

        /* Setters */
        void    setX(const int newX);
        void    setY(const int newY);

};

// std::ostream& operator<<(std::ostream& ostr, const Point& point)

#endif