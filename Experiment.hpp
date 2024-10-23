#pragma once
#include "Interactable.hpp"
#include "Helper.hpp"

class Experiment : public Interactable {
public:
    Experiment(int x, int y, int width, int height)
        : Interactable(x, y, width, height) {}

    bool interact(Scientist* player) override {
        if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0) {
            player->runExperiment();
            if (player->getExperimentCount() > 3) {
                return false; // Scientist is exhausted after more than 3 experiments
            }
            return true;
        }
        return true;  // No interaction if not on the same spot
    }

    InteractableType getType() override {
        return EXPERIMENT;
    }
};