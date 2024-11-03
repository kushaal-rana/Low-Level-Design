#include "vehicle_factory.hpp"
#include <iostream>
using namespace std;

Vehicle *VehicleFactory::getVehicle(string vehicleType)
{
    if (vehicleType == "car")
    {
        return new Car();
    }
    else if (vehicleType == "bike")
    {
        return new Bike();
    }
    else
    {
        cout << "Invalid vehicle vehicleType" << endl;
        return nullptr;
    }
}