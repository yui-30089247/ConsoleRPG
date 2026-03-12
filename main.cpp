#include "Player.h"
#include <iostream>

using namespace std;

int main() {
    // Player hero = Player();
    // Player wizard = Player("Dragon", 120, 15);

    // cout << "--- Initial Status ---" << endl;
    // hero.displayStatus();
    // wizard.displayStatus();

    // cout << endl;

    // cout << "--- Hero takes damage! ---" << endl;
    // hero.takeDamage(25);
    // hero.displayStatus();

    // cout << endl;

    // cout << "--- Wizard takes damage! ---" << endl;
    // wizard.takeDamage(150);
    // wizard.displayStatus();

    // cout << endl;

    // lab 7 test
    Player hero = Player();
    Item item1 = Item("Sword", 10);
    Item item2 = Item("Shield", 15);
    Item item3 = Item("Axes", 30);
  
    hero.addItem(item1);
    cout << hero.getName() << " found a ";
    item1.display();
    hero.addItem(item2);
    cout << hero.getName() << " found a ";
    item2.display();
    hero.addItem(item3);
    cout << hero.getName() << " found a ";
    item3.display();

    cout << "--- Hero's Inventory ---" <<  endl;
    hero.showInventory();
    cout << "Total items added to inventories: " << Item::getTotalItems() << endl;
}