#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"

using namespace std;

class Player {
    private: 
        string name;
        int health;
        int maxHealth;
        int attackPower;
        Inventory inventory;
        int x;
        int y;

    public: 
        Player(); // default constructor
        Player(string name, int health, int attackPower, int limit, Inventory inventory, int x, int y); // overloaded constructor
        ~Player();
        void takeDamage(int damage);
        string getName() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getAttackPower() const;
        void displayStatus() const;
        void showInventory() const;
        void addItem(const Item& item);
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
};

#endif