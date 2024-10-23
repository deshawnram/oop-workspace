#pragma once
#include "GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType { GOAL, EXPERIMENT };

class Interactable : public GridItem {
private:
    static int activeCount;

public:
    Interactable(int x = 0, int y = 0, int width = 0, int height = 0)
        : GridItem(x, y, width, height) {
        ++activeCount;
    }

    virtual ~Interactable() {
        --activeCount;
    }

    static int getActiveInteractableCount() {
        return activeCount;
    }

    virtual bool interact(Scientist* player) = 0;
    virtual InteractableType getType() = 0;
};

int Interactable::activeCount = 0;