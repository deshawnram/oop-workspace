#pragma once
#include <utility>
#include <cstdlib>  // Include this for abs
#include "GridItem.hpp"

class Scientist : public GridItem {
private:
    int experimentCount;

public:
    Scientist(int gridWidth, int gridHeight)
        : GridItem(0, 0, gridWidth, gridHeight), experimentCount(0) {}

    int getExperimentCount() const {
        return experimentCount;
    }

    void runExperiment() {
        ++experimentCount;
    }

    bool move(int xOffset, int yOffset) {
        int newX = getCoordinates().first + xOffset;
        int newY = getCoordinates().second + yOffset;

        if (std::abs(xOffset) <= 2 && std::abs(yOffset) <= 2 &&  // Use std::abs
            newX >= 0 && newX < getGridWidth() &&
            newY >= 0 && newY < getGridHeight()) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};