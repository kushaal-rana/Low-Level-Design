#ifndef logger_h
#define logger_h
#include <iostream>
#include <string>
using namespace std;
class Logger
{
public:
    static int ctr;
    Logger();
    void log(string message);
};
#endif