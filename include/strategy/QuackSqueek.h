#ifndef STRATEGY_QUACKSQUEEK_H_
#define STRATEGY_QUACKSQUEEK_H_

#include <string>

#include "strategy/interface/QuackBehavior.h"

class QuackSqueek : public QuackBehavior {
 public:
  std::string Quack() const override;
};

#endif  // STRATEGY_QUACKSQUEEK_H_
