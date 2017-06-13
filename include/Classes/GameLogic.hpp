#ifndef GAMELOGIC_HPP
# define GAMELOGIC_HPP

# include "Size.hpp"
# include "Snake.hpp"

class GameLogic
{
    private:
        /* Fields */
        Size        _screenSize;
        std::string  _graphicLibrary;
        Snake       _playerSnake;

    public:
        /* Constructors */
        GameLogic(void);
        GameLogic(const GameLogic& gameLogic);
        GameLogic(const Size& size);
        GameLogic(const int screenWidth, const int screenHeight);
        GameLogic(const std::string graphicLibrary);
        GameLogic(const Size& size, std::string graphicLibrary);
        GameLogic(const int screenWidth, const int screenHeight,
                    std::string graphicLibrary);

        ~GameLogic(void);

        GameLogic&  operator=(const GameLogic& gameLogic);

        Size        getScreenSize(void) const;
        std::string getGraphicLibrary(void) const;
        Snake       getPlayerSnake(void) const;

        void        setScreenSize(const Size& screenSize);
        void        setScreenSize(const int width, const int height);
        void        setScreenWidth(const int width);
        void        setScreenHeight(const int height);
        void        setGraphicLibrary(const std::string graphicLibrary);
        void        setPlayerSnake(Snake& snake);//?


};

#endif