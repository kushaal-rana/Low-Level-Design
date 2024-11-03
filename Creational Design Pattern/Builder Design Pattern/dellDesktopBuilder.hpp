#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include "desktopBuilder.hpp"
#include <iostream>
using namespace std;

class DellDesktopBuilder : public DesktopBuilder
{
public:
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeakers();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
    void showSpecsDesktop();
};

#endif // DELLDESKTOPBUILDER_H