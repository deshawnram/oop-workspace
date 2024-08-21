#include "ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding() : capacity(10), current_units(0) {
    units = new Unit[capacity];
}

ApartmentBuilding::ApartmentBuilding(int capacity) : capacity(capacity), current_units(0) {
    units = new Unit[capacity];
}

ApartmentBuilding::~ApartmentBuilding() {
    delete[] units;
}

int ApartmentBuilding::get_Capacity() {
    return capacity;
}

int ApartmentBuilding::get_Current_Number_of_Units() {
    return current_units;
}

Unit* ApartmentBuilding::get_Contents() {
    return units;
}

bool ApartmentBuilding::add_Unit(Unit unit) {
    if (current_units < capacity) {
        units[current_units++] = unit;
        return true;
    }
    return false;
}