#include <iostream>
#include "Scientist.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

int main() {
    Scientist player(4, 3);
    Goal goal(4, 3);
    Experiment exp1(1, 1, 4, 3);
    Experiment exp2(2, 2, 4, 3);

    player.move(1, 1);
    exp1.interact(&player);

    player.move(1, 1);
    exp2.interact(&player);

    player.move(1, 0);
    bool reachedGoal = goal.interact(&player);

    std::cout << "Reached Goal: " << (reachedGoal ? "Yes" : "No") << std::endl;
    std::cout << "Experiments Completed: " << player.getExperimentCount() << std::endl;

    return 0;
}