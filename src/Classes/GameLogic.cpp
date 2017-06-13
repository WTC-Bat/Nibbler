#include "GameLogic.hpp"

GameLogic::GameLogic(void)
{
    this->_screenSize = Size(800, 600);
    this->_graphicLibrary = "DEFAULT";
    this->_playerSnake = Snake();
}

GameLogic::GameLogic(const GameLogic& gameLogic)
{
    *this = gameLogic;
}

GameLogic::GameLogic(const Size& size)
{
    this->_screenSize = size;
    this->_graphicLibrary = "DEFAULT";
    this->_playerSnake = Snake();
}

GameLogic::GameLogic(const int screenWidth, const int screenHeight)
{
    this->_screenSize = Size(screenWidth, screenHeight);
    this->_graphicLibrary = "DEFAULT";
    this->_playerSnake = Snake();
}

GameLogic::GameLogic(const std::string graphicLibrary)
{
    this->_screenSize = Size(800, 600);
    this->_graphicLibrary = graphicLibrary;
    this->_playerSnake = Snake();
}

GameLogic::GameLogic(const Size& size, std::string graphicLibrary)
{
    this->_screenSize = size;
    this->_graphicLibrary = graphicLibrary;
    this->_playerSnake = Snake();
}

GameLogic::GameLogic(const int screenWidth,
                     const int screenHeight,
                     const std::string graphicLibrary)
{
    this->_screenSize = Size(screenWidth, screenHeight);
    this->_graphicLibrary = graphicLibrary;
    this->_playerSnake = Snake();
}

GameLogic::~GameLogic(void)
{
    return;
}

GameLogic&  GameLogic::operator=(const GameLogic& gameLogic)
{
    this->_screenSize = gameLogic.getScreenSize();
    this->_graphicLibrary = gameLogic.getGraphicLibrary();
    this->_playerSnake = gameLogic.getPlayerSnake();

    return (*this);
}

Size        GameLogic::getScreenSize(void) const
{
    return (this->_screenSize);
}

std::string GameLogic::getGraphicLibrary(void) const
{
    return (this->_graphicLibrary);
}

Snake       GameLogic::getPlayerSnake(void) const
{
    return (this->_playerSnake);
}

void        GameLogic::setScreenSize(const Size& screenSize)
{
    this->_screenSize = screenSize;
}

void        GameLogic::setScreenSize(const int screenWidth, const int screenHeight)
{
    this->_screenSize = Size(screenWidth, screenHeight);
}

void        GameLogic::setScreenWidth(const int screenWidth)
{
    this->_screenSize.setWidth(screenWidth);
}

void        GameLogic::setScreenHeight(const int screenHeight)
{
    this->_screenSize.setHeight(screenHeight);
}

void        GameLogic::setGraphicLibrary(const std::string graphicLibrary)
{
    this->_graphicLibrary = graphicLibrary;
}

void        GameLogic::setPlayerSnake(Snake& snake)
{
    this->_playerSnake = snake;
}