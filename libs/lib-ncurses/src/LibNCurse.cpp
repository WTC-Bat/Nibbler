#include "LibNCurse.hpp"

LibNCurse::LibNCurse(void)
{
    this->_screenWidth = 800;
    this->_screenHeight = 600;
    
    this->_initialize();
}

LibNCurse::LibNCurse(const LibNCurse& libncurse)
{
    *this = libncurse;

    // ???
    this->_initialize();
}

LibNCurse::LibNCurse(const int width, const int height)
{
    this->_initialize();
    this->setScreenSize(width, height);
}

LibNCurse::~LibNCurse(void)
{
    endwin();
    // return ;
}

LibNCurse   LibNCurse::operator=(const LibNCurse& libncurse)
{
    this->_screenWidth = libncurse.getScreenWidth();
    this->_screenHeight = libncurse.getScreenHeight();
    this->_snakeChar = libncurse.getSnakeChar();

    this->_update();

    return (*this);
}

int         LibNCurse::getScreenWidth(void) const
{
    return (this->_screenWidth);
}

int         LibNCurse::getScreenHeight(void) const
{
    return (this->_screenHeight);
}

int         LibNCurse::getScreenMaxWidth(void) const
{
    return (this->_screenMaxWidth);
}

int         LibNCurse::getScreenMaxHeight(void) const
{
    return (this->_screenMaxHeight);
}

char        LibNCurse::getSnakeChar(void) const
{
    return (this->_snakeChar);
}

void        LibNCurse::setScreenWidth(const int width)
{
    this->_screenWidth = width;
    this->_update();
}

void        LibNCurse::setScreenHeight(const int height)
{
    this->_screenHeight = height;
    this->_update();
}

void        LibNCurse::setScreenSize(const int width, const int height)
{
    this->_screenWidth = width;
    this->_screenHeight = height;
    this->_update();
}

void        LibNCurse::printString(std::string str)
{
    printw(str.c_str());
    refresh();
}

void        LibNCurse::printString(std::string str, int x, int y)
{
    mvprintw(y, x, str.c_str());
}

void        LibNCurse::_initialize(void)
{
    initscr();
    // raw();
    // cbreak();
    noecho();
    keypad(stdscr, true);
    curs_set(0);
    this->_screenWidth = 800;
    this->_screenHeight = 600;
    this->_snakeChar = static_cast<char>(254);  //178, 219
    this->_update();
}

void        LibNCurse::_update(void)
{
    wresize(stdscr, this->_screenHeight, this->_screenWidth);
    getmaxyx(stdscr, this->_screenMaxHeight, this->_screenMaxWidth);
    // resizeterm(this->_screenWidth, this->_screenHeight);
}