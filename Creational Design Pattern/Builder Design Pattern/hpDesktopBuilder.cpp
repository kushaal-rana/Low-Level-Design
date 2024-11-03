#include "hpDesktopBuilder.hpp"
#include <iostream>
using namespace std;

void HpDesktopBuilder::buildMonitor()
{
    desktop->setMonitor("HP Monitor");
}
void HpDesktopBuilder::buildKeyBoard()
{
    desktop->setKeyBoard("HP KeyBoard");
}
void HpDesktopBuilder::buildMouse()
{
    desktop->setMouse("HP Mouse");
}
void HpDesktopBuilder::buildSpeakers()
{
    desktop->setSpeakers("HP Speakers");
}
void HpDesktopBuilder::buildRam()
{
    desktop->setRam("HP Ram");
}
void HpDesktopBuilder::buildProcessor()
{
    desktop->setProcessor("HP Processor");
}
void HpDesktopBuilder::buildMotherBoard()
{
    desktop->setMotherBoard("HP MotherBoard");
}
void HpDesktopBuilder::showSpecsDesktop()
{
    desktop->showSpecsDesktop();
}