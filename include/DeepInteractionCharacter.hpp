#ifndef DEEP_INTERACTION_CHARACTER_HPP_INCLUDED
#define DEEP_INTERACTION_CHARACTER_HPP_INCLUDED

#include "Character.hpp"

class DeepInteractionCharacter : public Character {
 public:
  DeepInteractionCharacter();

  virtual ~DeepInteractionCharacter();

  virtual void levelUp() = 0;

  void setExperience(int experience);

  void setExperienceToNextLevel(int experienceToNextLevel);

  void setHealthPerkPoints(int healthPerkPoints);

  void setAttackStrengthPerkPoints(int attackStrengthPerkPoints);

  void setDefensePerkPoints(int defensePerkPoints);

  int getExperience() const;

  int getExperienceToNextLevel() const;

  int getHealthPerkPoints() const;

  int getAttackStrengthPerkPoints() const;

  int getDefensePerkPoints() const;

 protected:
  int experience;
  int experienceToNextLevel;
  int healthPerkPoints;
  int attackStrengthPerkPoints;
  int defensePerkPoints;
};

#endif  // DEEP_INTERACTION_CHARACTER_HPP_INCLUDED
