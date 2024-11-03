#ifndef DESKTOP_HPP
#define DESKTOP_HPP
#include <iostream>
using namespace std;

class Desktop
{
    string monitor;
    string keyboard;
    string mouse;
    string speakers;
    string ram;
    string processor;
    string motherBoard;

public:
    void setMonitor(string pMonitor);
    void setKeyBoard(string pKeyboard);
    void setMouse(string pMouse);
    void setSpeakers(string pSpeakers);
    void setRam(string pRam);
    void setProcessor(string pProcessor);
    void setMotherBoard(string pMotherBoard);
    void showSpecsDesktop();
};

#endif