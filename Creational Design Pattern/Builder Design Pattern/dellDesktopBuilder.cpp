#include "dellDesktopBuilder.hpp"

void DellDesktopBuilder::buildMonitor()
{
    desktop->setMonitor("Dell Monitor");
}
void DellDesktopBuilder::buildKeyBoard()
{
    desktop->setKeyBoard("Dell KeyBoard");
}
void DellDesktopBuilder::buildMouse()
{
    desktop->setMouse("Dell Mouse");
}
void DellDesktopBuilder::buildSpeakers()
{
    desktop->setSpeakers("Dell Speaker");
}
void DellDesktopBuilder::buildRam()
{
    desktop->setRam("Dell Ram");
}
void DellDesktopBuilder::buildProcessor()
{
    desktop->setProcessor("Dell Processor");
}
void DellDesktopBuilder::buildMotherBoard()
{
    desktop->setMotherBoard("Dell MotherBoard");
}
void DellDesktopBuilder::showSpecsDesktop()
{
    desktop->showSpecsDesktop();
}
