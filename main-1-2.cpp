#include <iostream>
#include "ApartmentBuilding.h"

int main() {
    ApartmentBuilding defaultBuilding;
    std::cout << "Default Building - Capacity: " << defaultBuilding.get_Capacity()
              << ", Current Units: " << defaultBuilding.get_Current_Number_of_Units() << std::endl;

    for (int i = 0; i < 11; ++i) {
        Unit unit(100000 + i * 10000, 2, 75.0 + i * 5.0);
        if (defaultBuilding.add_Unit(unit)) {
            std::cout << "Added unit " << i + 1 << std::endl;
        } else {
            std::cout << "Failed to add unit " << i + 1 << " - Building is full" << std::endl;
        }
    }

    ApartmentBuilding customBuilding(5);
    std::cout << "Custom Building - Capacity: " << customBuilding.get_Capacity()
              << ", Current Units: " << customBuilding.get_Current_Number_of_Units() << std::endl;

    for (int i = 0; i < 6; ++i) {
        Unit unit(200000 + i * 20000, 3, 95.0 + i * 10.0);
        if (customBuilding.add_Unit(unit)) {
            std::cout << "Added unit " << i + 1 << std::endl;
        } else {
            std::cout << "Failed to add unit " << i + 1 << " - Building is full" << std::endl;
        }
    }

    return 0;
}