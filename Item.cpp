#include "Item.h"
#include <iostream>

using namespace std;

int Item::totalItems = 0;

Item::Item() {
    name = "Scrap";
    value = 0;
}

Item::Item(string n, int val) : name(name), value(value) {
}

int Item::getTotalItems()  {
    return totalItems;
}

void Item::incrementTotalItems() {
    totalItems++;
}

void Item::display() const {
    cout << "[" << name << "]" << " " << "(Value: " << "[" << value << "])" << endl;
}

string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}