#include "../personal/include/Item.hpp"

Item::Item() : name("default") {}

Item::~Item() {}

void Item::setName(std::string name) { this->name = name; }

std::string Item::getName() const { return name; }
