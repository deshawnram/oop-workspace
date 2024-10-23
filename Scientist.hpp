#pragma once
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

        if (abs(xOffset) <= 2 && abs(yOffset) <= 2 &&
            newX >= 0 && newX < getGridWidth() &&
            newY >= 0 && newY < getGridHeight()) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};