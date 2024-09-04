#include "Airplane.h"

Airplane::Airplane() : AirCraft(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float fuelUsed = 0.3f * minutes;

    if (headwind >= 60) {
        fuelUsed += 0.2f * minutes;
    }

    fuelUsed += 0.001f * numPassengers * minutes;

    if ((get_fuel() - fuelUsed) >= 20) {
        // Calculate new fuel
        // Update fuel and increment flights
        numberOfFlights++;
    }
}