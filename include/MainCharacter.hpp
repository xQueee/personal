#ifndef MAINCHARACTER_HPP_INCLUDED
#define MAINCHARACTER_HPP_INCLUDED

#include "DeepInteractionCharacter.hpp"

class MainCharacter : public DeepInteractionCharacter {
 public:
  MainCharacter();

  ~MainCharacter();

  void attack(Character* target) override;

  void interact(Character* character) override;

  void sellItem(Item* item);

  void buyItem(Item* item);

  void pickUpItem(Item* item);

  void dropItem(Item* item);
};

#endif  // MAINCHARACTER_HPP_INCLUDED
