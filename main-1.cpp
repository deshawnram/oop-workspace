#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    GridItem item1(0, 0, 4, 3);
    GridItem item2(3, 2, 4, 3);

    std::cout << "Active Grid Items: " << GridItem::getActiveGridItemCount() << std::endl;

    std::pair<int, int> coords1 = item1.getCoordinates();
    std::pair<int, int> coords2 = item2.getCoordinates();

    std::cout << "Item1 Coordinates: (" << coords1.first << ", " << coords1.second << ")" << std::endl;
    std::cout << "Item2 Coordinates: (" << coords2.first << ", " << coords2.second << ")" << std::endl;

    int distance = Helper::manhattanDistance(coords1, coords2);
    std::cout << "Manhattan Distance between item1 and item2: " << distance << std::endl;

    return 0;
}