#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() {
    capacity = 10;
    items = new Item[10];
}

Inventory::Inventory(int capacity) {
    items = new Item[capacity];
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

