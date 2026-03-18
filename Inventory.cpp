#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() : items(new Item[10]), capacity(10) {
}

Inventory::Inventory(int capacity) : items(new Item[capacity]), capacity(capacity), itemCount(0) {
}

Inventory::~Inventory() {
    delete [] items;
}

bool Inventory::addItem(const Item& item) {
    if (capacity > itemCount) {
        items[itemCount] = item;
        Item::incrementTotalItems();
        cout << "An item was added: " << item.getName() << endl;
        itemCount++;
        return true;
    } else {
        return false;
    }
}

void Inventory::display() const {
    cout << "Inventory (" << itemCount << "/" << capacity << "): " << endl;

    for (int i = 0; i < itemCount; i++) {
        items[i].display();
    }
};

