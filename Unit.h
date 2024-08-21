#ifndef UNIT_H
#define UNIT_H

class Unit {
private:
    int market_value;
    int num_bedrooms;
    double area;

public:
    Unit();

    Unit(int unit_val, int num_beds, double unit_size);

    int get_Num_Bedrooms();
    int get_Value();
    double get_Area();
};

#endif 