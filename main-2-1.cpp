#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter heli(6000, "BlackHawk");
    heli.fly(45, 10);
    std::cout << "Helicopter Name: " << heli.get_name() << std::endl;

    return 0;
}