#pragma once
#include "Interactable.hpp"
#include "Helper.hpp"

class Experiment : public Interactable {
public:
    Experiment(int x, int y, int width, int height)
        : Interactable(x, y, width, height) {}

    bool interact(Scientist* player) override {
        if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0) {
            if (player->getExperimentCount() < 3) {
                player->runExperiment();
                return true;
            }
            return false; // Scientist is exhausted if already completed 3 experiments
        }
        return true;  // No interaction if not on the same spot
    }

    InteractableType getType() override {
        return EXPERIMENT;
    }
};