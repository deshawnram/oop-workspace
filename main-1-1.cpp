#include <iostream>
#include "Unit.h"

int main() {
    Unit defaultUnit;
    std::cout << "Default Unit - Bedrooms: " << defaultUnit.get_Num_Bedrooms()
              << ", Value: " << defaultUnit.get_Value()
              << ", Area: " << defaultUnit.get_Area() << std::endl;

    Unit validUnit(300000, 2, 85.5);
    std::cout << "Valid Unit - Bedrooms: " << validUnit.get_Num_Bedrooms()
              << ", Value: " << validUnit.get_Value()
              << ", Area: " << validUnit.get_Area() << std::endl;

    Unit invalidUnit(-500000, -2, -100.0);
    std::cout << "Invalid Unit - Bedrooms: " << invalidUnit.get_Num_Bedrooms()
              << ", Value: " << invalidUnit.get_Value()
              << ", Area: " << invalidUnit.get_Area() << std::endl;

    return 0;
}