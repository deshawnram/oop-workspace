#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft {
private:
    std::string name;

public:
    Helicopter();
    Helicopter(int w, std::string n);
    
    void fly(int headwind, int minutes) override;

    std::string get_name() const;
    void set_name(std::string n);
};

#endif // HELICOPTER_H