#ifndef vehicle_factory
#define vehicle_factory
#include "bike.hpp"
#include "car.hpp"
#include <iostream>
using namespace std;

class VehicleFactory
{
public:
    static Vehicle *getVehicle(string vehicleType);
};

#endif