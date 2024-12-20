#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED

#include <string>

class Item {
 public:
  Item();

  virtual ~Item();

  void setName(std::string name);

  std::string getName() const;

 protected:
  std::string name;
};

#endif  // ITEM_HPP_INCLUDED
