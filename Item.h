#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item {
    private:
        static int totalItems;
        string name;
        int value;

    public:
        Item();
        Item(string n, int val);
        static int getTotalItems();
        static void incrementTotalItems();
        string getName() const;
        int getValue() const;
        void display() const;
};

#endif