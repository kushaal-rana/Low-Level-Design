#include <iostream>
#include "logger.hpp"
#include <string>
using namespace std;

int main()
{
    Logger *logger = new Logger();
    logger->log("This message is from User 1");

    Logger *logger2 = new Logger();
    logger2->log("This message is from User 2");

    return 0;
}