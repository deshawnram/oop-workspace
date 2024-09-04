#include "Helicopter.h"

Helicopter::Helicopter() : AirCraft(), name("") {}

Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
    float fuelUsed = 0.2f * minutes;

    if (headwind >= 40) {
        fuelUsed += 0.2f * minutes;
    }

    if (get_weight() > 5670) {
        fuelUsed += (get_weight() - 5670) * 0.01f * minutes;
    }

    if ((get_fuel() - fuelUsed) >= 20) {
        // Calculate new fuel
        // Update fuel and increment flights
        numberOfFlights++;
    }
}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}