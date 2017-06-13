#include "Size.hpp"

Size::Size(void)
{
    this->_width = 0;
    this->_height = 0;
}

Size::Size(int width, int height)
{
    this->_width = width;
    this->_height = height;
}

Size::Size(const Size& size)
{
    *this = size;
}

Size::~Size(void)
{
    return ;
}

Size&               Size::operator=(const Size& size)
{
    this->_width = size.getWidth();
    this->_height = size.getHeight();

    return (*this);
}

int                 Size::getWidth(void) const
{
    return (this->_width);
}

int                 Size::getHeight(void) const
{
    return (this->_height);
}

void                Size::setWidth(const int width)
{
    this->_width = width;
}

void                Size::setHeight(const int height)
{
    this->_height = height;
}