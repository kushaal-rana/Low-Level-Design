#ifndef DESKTOPDIRECTOR
#define DESKTOPDIRECTOR
#include "desktopBuilder.hpp"
#include <iostream>
using namespace std;

class DesktopDirector
{
private:
    DesktopBuilder *desktopBuilder;

public:
    DesktopDirector(DesktopBuilder *pdesktopBuilder)
    {
        this->desktopBuilder = pdesktopBuilder;
    }
    Desktop *getDesktop()
    {
        return desktopBuilder->getDesktop();
    }
    Desktop *buildDesktop() // or Construct Desktop
    {
        desktopBuilder->buildMonitor();
        desktopBuilder->buildKeyBoard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildSpeakers();
        desktopBuilder->buildRam();
        desktopBuilder->buildMotherBoard();
        desktopBuilder->buildProcessor();
        // desktopBuilder->showSpecsDesktop();

        return desktopBuilder->getDesktop();
    }
};

#endif