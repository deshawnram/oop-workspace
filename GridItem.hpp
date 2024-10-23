#pragma once
#include <utility>

class GridItem {
private:
    int x, y, width, height;
    static int activeCount;

public:
    GridItem(int x = 0, int y = 0, int width = 0, int height = 0)
        : x(x), y(y), width(width), height(height) {
        ++activeCount;
    }

    ~GridItem() {
        --activeCount;
    }

    std::pair<int, int> getCoordinates() const {
        return {x, y};
    }

    int getGridWidth() const {
        return width;
    }

    int getGridHeight() const {
        return height;
    }

    static int getActiveGridItemCount() {
        return activeCount;
    }

    void setCoordinates(int newX, int newY) {
        x = newX;
        y = newY;
    }
};

int GridItem::activeCount = 0;