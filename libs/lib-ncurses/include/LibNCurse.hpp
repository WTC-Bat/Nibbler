#ifndef LIBNCURSE_HPP
# define LIBNCURSE_HPP

# include <ncurses.h>
# include <curses.h>
# include <iostream>

class LibNCurse
{
    private:
        int         _screenWidth;
        int         _screenHeight;
        int         _screenMaxWidth;
        int         _screenMaxHeight;
        char        _snakeChar;

        void        _initialize(void);
        void        _update(void);

    public:
        LibNCurse(void);
        LibNCurse(const LibNCurse& libncurse);
        LibNCurse(const int width, const int height);

        ~LibNCurse(void);

        LibNCurse   operator=(const LibNCurse& libncurse);
        
        int         getScreenWidth(void) const;
        int         getScreenHeight(void) const;
        int         getScreenMaxWidth(void) const;
        int         getScreenMaxHeight(void) const;
        char        getSnakeChar(void) const;

        void        setScreenWidth(const int width);
        void        setScreenHeight(const int height);
        void        setScreenSize(const int width, const int height);

        void        printString(std::string str);
        void        printString(std::string str, int x, int y);
};

#endif