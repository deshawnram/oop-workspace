#include "AirCraft.h"

AirCraft::AirCraft() : weight(0), fuel(100.0f), numberOfFlights(0) {}

AirCraft::AirCraft(int w) : weight(w), fuel(100.0f), numberOfFlights(0) {}

void AirCraft::refuel() {
    fuel = 100.0f;
}

void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
}

int AirCraft::get_weight() const {
    return weight;
}

float AirCraft::get_fuel() const {
    return fuel;
}

int AirCraft::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirCraft::set_weight(int w) {
    weight = w;
}