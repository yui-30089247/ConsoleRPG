#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(int capacity) {
    items = new Item[capacity];
}

Inventory::~Inventory() {
    delete [] items;
}

bool Inventory::addItem(const Item& item) {
    if (capacity > itemCount) {
        Item::incrementTotalItems();
        cout << "An item was added: [" << item.getName() << "]" << endl;
        itemCount++;
        return true;
    } else {
        return false;
    }
}

