#include <cstring>

#include "nibbler.hpp"

static bool isInt(char *str)
{
    if (str == 0)
        return (false);
    
    while (*str != 0)
    {
        if (!isdigit(*str))
        {
            if (*str == '-')
            {
                if (!isdigit(*str + 1))
                {
                    return (false);
                }
            }
            else
            {
                return (false);
            }
        }
        str++;
    }
    return (true);
}

static bool checkArgs(int argc, char **argv)
{
    if (argc == 3)
    {
        std::cout << "3 args" << std::endl;
        if (isInt(argv[1]) && isInt(argv[2]))
        {
            std::cout << "Both width and height are valid numbers" << std::endl;
        }
        else
        {
            std::cout << "ERROR" << std::endl;
        }
    }
    else if (argc == 2)
    {

    }
    return (true);
}

int         main(int argc, char **argv)
{
    if (checkArgs(argc, argv))
    {
        std::cout << "Args Okay" << std::endl;
    }
}