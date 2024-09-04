#include <iostream>
#include "AirCraft.h"

int main() {
    AirCraft aircraft(5000);
    std::cout << "Initial Fuel: " << aircraft.get_fuel() << "%" << std::endl;
    
    aircraft.fly(10, 30);
    std::cout << "Number of Flights: " << aircraft.get_numberOfFlights() << std::endl;
    
    aircraft.refuel();
    std::cout << "Fuel after refuel: " << aircraft.get_fuel() << "%" << std::endl;

    return 0;
}