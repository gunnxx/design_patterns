#ifndef STRATEGY_INTERFACE_QUACKBEHAVIOR_H_
#define STRATEGY_INTERFACE_QUACKBEHAVIOR_H_

#include <string>

class QuackBehavior {
 public:
  virtual std::string Quack() const = 0;
};

#endif  // STRATEGY_INTERFACE_QUACKBEHAVIOR_H_
