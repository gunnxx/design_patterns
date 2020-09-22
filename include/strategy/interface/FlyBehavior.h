#ifndef STRATEGY_INTERFACE_FLYBEHAVIOR_H_
#define STRATEGY_INTERFACE_FLYBEHAVIOR_H_

#include <string>

class FlyBehavior {
 public:
  virtual std::string Fly() const = 0;
};

#endif  // STRATEGY_INTERFACE_FLYBEHAVIOR_H_
