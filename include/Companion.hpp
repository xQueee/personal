#ifndef COMPANION_HPP_INCLUDED
#define COMPANION_HPP_INCLUDED

#include "DeepInteractionCharacter.hpp"

class Companion : public DeepInteractionCharacter {
 public:
  Companion();

  ~Companion();

  void attack(Character* target) override;

  void interact(Character* character) override;

  void levelUp() override;

  void setOwner(Character* owner);

  Character* getOwner() const;

 protected:
  Character* owner;
};

#endif  // COMPANION_HPP_INCLUDED
