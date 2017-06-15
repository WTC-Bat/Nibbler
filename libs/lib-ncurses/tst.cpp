#include "LibNCurse.hpp"

#include <sstream>

std::string toStr(int i)
{
    std::stringstream strstream;

    strstream << i << std::endl;

    return (strstream.str());
}

int     main(void)
{
    LibNCurse lnc = LibNCurse();

    // lnc.printString(toStr(lnc.getScreenWidth()));
    // lnc.printString(toStr(lnc.getScreenHeight()));
    // lnc.printString(toStr(lnc.getScreenMaxWidth()));
    // lnc.printString(toStr(lnc.getScreenMaxHeight()));

    lnc.printString(toStr(lnc.getScreenWidth()), );
    lnc.printString(toStr(lnc.getScreenHeight()), 5, 5);
    lnc.printString(toStr(lnc.getScreenMaxWidth()), 5, 5);
    lnc.printString(toStr(lnc.getScreenMaxHeight()), 5, 5);

    getch();

    return (0);
}