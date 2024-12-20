#include "Armor.hpp"

Armor::Armor() : Item(), defense(0), weight(0) {}

Armor::~Armor() {}

int Armor::getDefense() const { return defense; }

void Armor::setWeight(int weight) { this->weight = weight; }

int Armor::getWeight() const { return weight; }
