#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(string n, int h, int ap) {
    name = n;
    health = h;
    attackPower = ap;
    maxHealth = h;
}

Player::~Player() {
    cout << "The object for Player " << name << " has been destroyed." << endl;
}

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
        cout << name << " fails to the ground, defeated." << endl;
    }
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttackPower() const {
    return attackPower;
}

void Player::displayStatus() const {
    cout << "[" << name << "]" << " - HP: " << health << "/" << maxHealth << endl;
}

void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    inventory.addItem(item);
}

