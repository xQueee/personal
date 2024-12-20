#ifndef CHARACTER_HPP_INCLUDED
#define CHARACTER_HPP_INCLUDED

#include <string>
#include <vector>

#include "Item.hpp"

class Character {
 public:
  Character();
  virtual ~Character();

  void addItemToInventory(Item* item);
  void removeItemFromInventory(Item* item);
  virtual void equipItem(Item* item);
  virtual void unequipItem(Item* item);

  // Setters
  void setName(std::string name);
  void setHealth(int health);
  void setAttackStrength(int attackStrength);
  void setDefense(int defense);
  void setLevel(int level);
  void setGold(int gold);

  // Getters
  std::string getName() const;
  int getHealth() const;
  int getAttackStrength() const;
  int getDefense() const;
  int getLevel() const;
  int getGold() const;

 protected:
  virtual void attack(Character* target) = 0;
  virtual void interact(Character* character) = 0;

  std::string name;
  int health;
  int attackStrength;
  int defense;
  int level;
  int gold;
  std::vector<Item*> inventory;
};

#endif  // CHARACTER_HPP_INCLUDED