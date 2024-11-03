#ifndef HPDESKTOPBUILDER_HPP
#define HPDESKTOPBUILDER_HPP
#include "desktopBuilder.hpp"
#include <iostream>
using namespace std;
class HpDesktopBuilder : public DesktopBuilder
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

#endif // HPDESKTOPBUILDER_HPP