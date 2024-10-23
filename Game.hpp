#pragma once
#include <vector>
#include <iostream>
#include "Scientist.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width, height;
    Scientist player;
    Goal goal;
    std::vector<Experiment> experiments;
    GameState state;

public:
    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates)
        : width(width), height(height), player(width, height), goal(width, height), state(PLAYING) {
        
        for (auto& coord : experimentCoordinates) {
            if (coord != std::make_pair(0, 0) && coord != std::make_pair(width - 1, height - 1)) {
                experiments.emplace_back(coord.first, coord.second, width, height);
            }
        }
    }

    bool displayState() {
        switch (state) {
            case WIN:
                std::cout << "You win!" << std::endl;
                return true;
            case LOSE:
                std::cout << "You lose :(" << std::endl;
                return true;
            case PLAYING:
                std::cout << "Game on" << std::endl;
                return false;
        }
        return false;
    }

    void movePlayer(int dx, int dy) {
        if (state == PLAYING && player.move(dx, dy)) {
            for (auto& experiment : experiments) {
                if (!experiment.interact(&player)) {
                    state = LOSE;
                    return;
                }
            }
            if (goal.interact(&player)) {
                state = WIN;
            } else if (player.getExperimentCount() > 3) {
                state = LOSE;
            }
        }
    }

    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                char symbol = '_';
                if (goal.getCoordinates() == std::make_pair(x, y)) {
                    symbol = 'G';
                }
                for (auto& experiment : experiments) {
                    if (experiment.getCoordinates() == std::make_pair(x, y)) {
                        symbol = 'E';
                        break;
                    }
                }
                if (player.getCoordinates() == std::make_pair(x, y)) {
                    symbol = 'P';
                }
                std::cout << symbol;
            }
            std::cout << std::endl;
        }
    }
};