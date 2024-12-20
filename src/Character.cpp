#include "../personal/include/Character.hpp"

Character::Character()
    : name("default"),
      health(100),
      attackStrength(35),
      defense(15),
      level(1),
      gold(100) {};

Character::~Character() {
  for (Item* item : inventory) {
    delete item;
    item = nullptr;
  }
}

void Character::addItemToInventory(Item* item) { inventory.push_back(item); }

void Character::removeItemFromInventory(Item* item) {
  for (size_t i = 0; i < inventory.size(); ++i) {
    if (inventory[i] == item) {
      inventory.erase(inventory.begin() + i);
      break;
    }
  }
}

void Character::equipItem(Item* item) {}

void Character::unequipItem(Item* item) {}

void Character::setName(std::string name) { this->name = name; }

void Character::setHealth(int health) { this->health = health; }

void Character::setAttackStrength(int attackStrength) {
  this->attackStrength = attackStrength;
}

void Character::setDefense(int defense) { this->defense = defense; }

void Character::setLevel(int level) { this->level = level; }

void Character::setGold(int gold) { this->gold = gold; }

std::string Character::getName() const { return name; }

int Character::getHealth() const { return health; }

int Character::getAttackStrength() const { return attackStrength; }

int Character::getDefense() const { return defense; }

int Character::getLevel() const { return level; }

int Character::getGold() const { return gold; }
