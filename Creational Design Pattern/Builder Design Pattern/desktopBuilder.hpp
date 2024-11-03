#ifndef desktopBuilder_hpp
#define desktopBuilder_hpp
#include "desktop.hpp"

class DesktopBuilder
{
    // Product needs to be accessed by Concreate Builders which will be inherited by This Desktop Builder
protected:
    Desktop *desktop; // desktop product

public:
    DesktopBuilder()
    {
        desktop = new Desktop();
    }
    virtual void buildMonitor() = 0;
    virtual void buildKeyBoard() = 0;
    virtual void buildMouse() = 0;
    virtual void buildSpeakers() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildMotherBoard() = 0;
    virtual void showSpecsDesktop() = 0;
    virtual Desktop *getDesktop() // getter of the product Desktop
    {
        return desktop;
    }
};

#endif /* desktopBuilder_hpp */