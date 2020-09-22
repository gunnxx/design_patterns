#ifndef STRATEGY_QUACKQUACK_H_
#define STRATEGY_QUACKQUACK_H_

#include <string>

#include "strategy/interface/QuackBehavior.h"

class QuackQuack : public QuackBehavior {
 public:
  std::string Quack() const override;
};

#endif  // STRATEGY_QUACKQUACK_H_
