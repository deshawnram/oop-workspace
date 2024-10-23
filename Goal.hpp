#pragma once
#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable {
public:
    Goal(int width, int height)
        : Interactable(width - 1, height - 1, width, height) {}

    bool interact(Scientist* player) override {
        if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0 &&
            player->getExperimentCount() >= 1) {
            return true;
        }
        return false;
    }

    InteractableType getType() override {
        return GOAL;
    }
};