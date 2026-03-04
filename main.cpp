#include "Player.h"
#include <iostream>

using namespace std;

int main() {
    Player hero = Player();
    Player wizard = Player("Dragon", 120, 15);

    cout << "--- Initial Status ---" << endl;
    hero.displayStatus();
    wizard.displayStatus();

    cout << endl;

    cout << "--- Hero takes damage! ---" << endl;
    hero.takeDamage(25);
    hero.displayStatus();

    cout << endl;

    cout << "--- Wizard takes damage! ---" << endl;
    wizard.takeDamage(150);
    wizard.displayStatus();

    cout << endl;
}