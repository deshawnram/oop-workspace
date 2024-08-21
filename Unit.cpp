#include "Unit.h"

Unit::Unit() : market_value(0), num_bedrooms(0), area(0.0) {}

Unit::Unit(int unit_val, int num_beds, double unit_size) {
    market_value = (unit_val >= 0) ? unit_val : 0;
    num_bedrooms = (num_beds >= 0) ? num_beds : 0;
    area = (unit_size >= 0.0) ? unit_size : 0.0;
}

int Unit::get_Num_Bedrooms() {
    return num_bedrooms;
}

int Unit::get_Value() { 
    return market_value;
}

double Unit::get_Area() {
    return area;
}