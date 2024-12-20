#ifndef HELMET_HPP_INCLUDED
#define HELMET_HPP_INCLUDED

#include "Armor.hpp"

class Helmet : public Armor {
 public:
  Helmet();

  virtual ~Helmet();

  void setDefense(int defense) override;

 protected:
  int defense;
  int weight;
};

#endif  // HELMET_HPP_INCLUDED