#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
private:
    int weight;
    float fuel;
    int numberOfFlights;

public:
    AirCraft();
    AirCraft(int w);
    
    void refuel();
    virtual void fly(int headwind, int minutes);

    int get_weight() const;
    float get_fuel() const;
    int get_numberOfFlights() const;
    void set_weight(int w);
};

#endif // AIRCRAFT_H