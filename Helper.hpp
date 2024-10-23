#pragma once
#include <utility>
#include <cmath>

class Helper {
public:
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        return std::abs(item1.first - item2.first) + std::abs(item1.second - item2.second);
    }
};