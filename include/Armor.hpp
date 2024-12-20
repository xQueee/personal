#ifndef ARMOR_HPP_INCLUDED
#define ARMOR_HPP_INCLUDED

#include "Item.hpp"

class Armor : public Item {
 public:
  Armor();

  virtual ~Armor();

  virtual void setDefense(int defense) = 0;

  int getDefense() const;

  void setWeight(int weight);

  int getWeight() const;

 protected:
  int defense;
  int weight;
};

#endif  // ARMOR_HPP_INCLUDED