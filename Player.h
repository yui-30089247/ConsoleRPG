#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player {
    private: 
        string name;
        int health;
        int maxHealth;
        int attackPower;

    public: 
        Player(); // default constructor
        Player(string name, int health, int attackPower); // overloaded constructor
        ~Player();
        void takeDamage(int damage);
        string getName() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getAttackPower() const;
        void displayStatus() const;
};

#endif