#include "Game.hpp"

int main() {
    std::vector<std::pair<int, int>> experimentCoords = {{1, 1}, {2, 2}, {3, 0}};
    Game game(4, 6, experimentCoords);

    while (!game.displayState()) {
        game.printGrid();
        int dx, dy;
        std::cout << "Enter move (dx dy): ";
        std::cin >> dx >> dy;
        game.movePlayer(dx, dy);
    }

    return 0;
}