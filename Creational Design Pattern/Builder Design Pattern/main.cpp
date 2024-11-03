#include "hpDesktopBuilder.hpp"
#include "dellDesktopBuilder.hpp"
#include "desktopDirector.cpp"
#include "desktopBuilder.hpp"
#include "desktop.hpp"
#include <iostream>
using namespace std;

int main()
{
    HpDesktopBuilder *hpDesktopBuilder = new HpDesktopBuilder();
    DesktopDirector *director = new DesktopDirector(hpDesktopBuilder);
    director->buildDesktop();
    Desktop *desktop1 = director->buildDesktop();
    desktop1->showSpecsDesktop();

    DellDesktopBuilder *dellDesktopBuilder = new DellDesktopBuilder();
    DesktopDirector *director2 = new DesktopDirector(dellDesktopBuilder);
    // Desktop *desktop2 = director->getDesktop();
    Desktop *desktop2 = director2->buildDesktop();
    desktop2->showSpecsDesktop();

    return 0;
}