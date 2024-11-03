#include "vehicle_factory.hpp"
#include <iostream>
using namespace std;

int main()
{
    string vehicleType;
    cout << "Enter vehicle type: ";
    cin >> vehicleType;
    Vehicle *vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
}

// Library should be responsible to decide which object type to create based on the input. Client should just call library's factory and pass type without worrying about implementation of creation of object. This is the main advantage of Factory Design Pattern.