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
            return player->getExperimentCount() <= 3;
        }
        return false;
    }

    InteractableType getType() override {
        return EXPERIMENT;
    }
};