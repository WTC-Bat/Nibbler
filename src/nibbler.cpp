#include <cstring>
#include <cstdlib>
#include <sstream>

#include "nibbler.hpp"

// s_Game  gGame;
GameLogic   gGameLogic;

// static std::string  toStr(int i)
// {
//     std::stringstream strstream;

//     strstream << i;

//     return (strstream.str());
// }

static bool isInt(char *str)
{
    int     idx;

    if (str)
    {
        idx = 0;
        while (str[idx] != 0)
        {
            if (!std::isdigit(str[idx]))
            {
                return (false);
            }
            idx++;
        }
        return (true);
    }
    return (false);

    // std::string::const_iterator siter;
    // std::string s;

    // s = str;
    // if (!s.empty())
    // {
    //     if (s[0] == '-')
    //         return (false);    //Signed integers not supported
    //     siter = s.begin();
    //     while (siter != s.end())
    //     {
    //         if (!std::isdigit(*siter))
    //         {
    //             return (false); //
    //         }
    //         siter++;
    //     }
    // }
    // return (true);
}

// bool
static bool checkArgs(char **argv)
{
    /*
    **  Args:
    **  -w      -   Width integer
    **  -h      -   Height integer
    **  -lib    -   starting library
    */
    int     idx;

    idx = 1;
    while (argv[idx] != NULL)
    {
        if (std::strcmp(argv[idx], "-w") == 0)
        {
            if (!isInt(argv[idx + 1]))
            {
                std::cerr
                    << "Error: only non-negative numbers valid for '-w'"
                    << std::endl;
                return (false);
            }
            gGameLogic.setScreenWidth(std::atoi(argv[idx + 1]));
                idx++;
        }
        else if (std::strcmp(argv[idx], "-h") == 0)
        {
            if (!isInt(argv[idx + 1]))
            {
                std::cerr
                    << "Error: only non-negative numbers valid for '-h'"
                    << std::endl;
                return (false);
            }
            gGameLogic.setScreenHeight(std::atoi(argv[idx + 1]));
                idx++;
        }
        else if (std::strcmp(argv[idx], "-lib") == 0)
        {
            if (std::strcmp(argv[idx + 1], "lib1") == 0)
            {
                //Load lib1
                gGameLogic.setGraphicLibrary("lib1");
                idx++;
            }
            else if (std::strcmp(argv[idx + 1], "lib2") == 0)
            {
                gGameLogic.setGraphicLibrary("lib2");
                idx++;
            }
            else if(std::strcmp(argv[idx + 1], "lib3") == 0)
            {
                gGameLogic.setGraphicLibrary("lib3");
                idx++;
            }
        }
        else
        {
            std::cerr << "Unkown Argument: '" << argv[idx] << "'" << std::endl;
            return (false);
        }
        idx++;
    }
    return (true);
}

int         main(int argc, char **argv)
{
    gGameLogic = GameLogic();
    gGameLogic.setGraphicLibrary("lib1");

    if (argc > 7)
    { /*Aren't that many args*/ }

    checkArgs(argv);

    /*
    std::cout << "GL X: " << toStr(gGameLogic.getScreenSize().getWidth()) << std::endl;
    std::cout << "GL Y: " << toStr(gGameLogic.getScreenSize().getHeight()) << std::endl;
    std::cout << "GL LIB: " << gGameLogic.getGraphicLibrary() << std::endl;
    std::cout << "Snake Length: " << toStr(gGameLogic.getPlayerSnake().getSnakeLength()) << std::endl;
    std::cout << "Snake PosX: " << toStr(gGameLogic.getPlayerSnake().getSnakePosition().getX()) << std::endl;
    std::cout << "Snake PosY: " << toStr(gGameLogic.getPlayerSnake().getSnakePosition().getY()) << std::endl;
    */
}