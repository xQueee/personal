#include "DeepInteractionCharacter.hpp"

DeepInteractionCharacter::DeepInteractionCharacter()
    : Character(),
      experience(0),
      experienceToNextLevel(100),
      healthPerkPoints(0),
      attackStrengthPerkPoints(0),
      defensePerkPoints(0) {}

DeepInteractionCharacter::~DeepInteractionCharacter() {}

void DeepInteractionCharacter::setExperience(int experience) {
  this->experience = experience;
}

void DeepInteractionCharacter::setExperienceToNextLevel(
    int experienceToNextLevel) {
  this->experienceToNextLevel = experienceToNextLevel;
}

void DeepInteractionCharacter::setHealthPerkPoints(int healthPerkPoints) {
  this->healthPerkPoints = healthPerkPoints;
}

void DeepInteractionCharacter::setAttackStrengthPerkPoints(
    int attackStrengthPerkPoints) {
  this->attackStrengthPerkPoints = attackStrengthPerkPoints;
}

void DeepInteractionCharacter::setDefensePerkPoints(int defensePerkPoints) {
  this->defensePerkPoints = defensePerkPoints;
}

int DeepInteractionCharacter::getExperience() const { return experience; }

int DeepInteractionCharacter::getExperienceToNextLevel() const {
  return experienceToNextLevel;
}

int DeepInteractionCharacter::getHealthPerkPoints() const {
  return healthPerkPoints;
}

int DeepInteractionCharacter::getAttackStrengthPerkPoints() const {
  return attackStrengthPerkPoints;
}

int DeepInteractionCharacter::getDefensePerkPoints() const {
  return defensePerkPoints;
}
