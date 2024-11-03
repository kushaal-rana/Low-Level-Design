#include <iostream>
#include "logger.hpp"
using namespace std;

int Logger::ctr = 0;
Logger::Logger()
{
    ctr++;
    cout << "New Logger Instance created" << "   "
         << "Instance Count is " << ctr << endl;
}
void Logger::log(string message)
{
    cout << message << endl;
}
