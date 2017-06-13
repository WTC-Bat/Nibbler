#include "Snake.hpp"
#include "GameLogic.hpp"

#include <sstream>

static std::string  toStr(int i)
{
    std::stringstream strstream;

    strstream << i;

    return (strstream.str());
}

int     main(void)
{
    // Snake s = Snake();
    // s.setSnakeLength(10);
    // s.setSnakePosition(Point(19, 32));

    // std::cout << "Snake Length: " << toStr(s.getSnakeLength()) << std::endl;
    // std::cout << "Snake PosX: " << toStr(s.getSnakePosition().getX()) << std::endl;
    // std::cout << "Snake PosY: " << toStr(s.getSnakePosition().getY()) << std::endl;



    GameLogic gl = GameLogic();

    std::cout << "GL X: " << toStr(gl.getScreenSize().getWidth()) << std::endl;
    std::cout << "GL Y: " << toStr(gl.getScreenSize().getHeight()) << std::endl;
    std::cout << "GL LIB: " << gl.getGraphicLibrary() << std::endl;
    std::cout << "Snake Length: " << toStr(gl.getPlayerSnake().getSnakeLength()) << std::endl;
    std::cout << "Snake PosX: " << toStr(gl.getPlayerSnake().getSnakePosition().getX()) << std::endl;
    std::cout << "Snake PosY: " << toStr(gl.getPlayerSnake().getSnakePosition().getY()) << std::endl;


    return (0);
}