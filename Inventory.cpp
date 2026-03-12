#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() {
    items = new Item[10];
}

Inventory::Inventory(int capacity) {
    items = new Item[capacity];
}

Inventory::~Inventory() {
    delete [] items;
}

bool Inventory::addItem(const Item& item) {
    cout << "here" << endl;
    cout << "Capacity: " << capacity << ", itemCount: " << itemCount << endl;
    if (capacity > itemCount) {
        Item::incrementTotalItems();
        cout << "An item was added: [" << item.getName() << "]" << endl;
        itemCount++;
        return true;
    } else {
        return false;
    }
}

void Inventory::display() const {
    items->display();
};

