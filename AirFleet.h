#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
private:
    AirCraft** fleet;

public:
    AirFleet();
    ~AirFleet();
    AirCraft** get_fleet();
};

#endif // AIRFLEET_H