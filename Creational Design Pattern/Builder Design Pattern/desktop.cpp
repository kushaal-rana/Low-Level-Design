#include "desktop.hpp"

#include <iostream>
using namespace std;

void Desktop::setMonitor(string pMonitor)
{
    monitor = pMonitor;
}
void Desktop::setKeyBoard(string pKeyboard)
{
    keyboard = pKeyboard;
}
void Desktop::setMouse(string pMouse)
{
    mouse = pMouse;
}
void Desktop::setSpeakers(string pSpeakers)
{
    speakers = pSpeakers;
}
void Desktop::setRam(string pRam)
{
    ram = pRam;
}
void Desktop::setProcessor(string pProcessor)
{
    processor = pProcessor;
}
void Desktop::setMotherBoard(string pMotherBoard)
{
    motherBoard = pMotherBoard;
}
void Desktop::showSpecsDesktop()
{
    cout << "---------Desktop Specs---------" << endl;
    cout << "Monitor: " << monitor << endl;
    cout << "Keyboard: " << keyboard << endl;
    cout << "Mouse: " << mouse << endl;
    cout << "Speakers: " << speakers << endl;
    cout << "RAM: " << ram << endl;
    cout << "Processor: " << processor << endl;
    cout << "Motherboard: " << motherBoard << endl;
    cout << "------------------" << endl;
}
