#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet fleet;
    AirCraft** aircrafts = fleet.get_fleet();

    for (int i = 0; i < 5; ++i) {
        std::cout << "Aircraft " << i + 1 << " weight: " << aircrafts[i]->get_weight() << std::endl;
    }

    return 0;
}