#include <iostream>
#include "Airplane.h"

int main() {
    Airplane plane(20000, 100);
    plane.reducePassengers(10);
    std::cout << "Current Passengers: " << plane.get_numPassengers() << std::endl;

    plane.fly(65, 120);
    return 0;
}