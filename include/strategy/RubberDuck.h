#ifndef STRATEGY_RUBBERDUCK_H_
#define STRATEGY_RUBBERDUCK_H_

#include <memory>
#include <string>

#include "strategy/Duck.h"
#include "strategy/FlyNoWay.h"
#include "strategy/QuackSqueek.h"

class RubberDuck : public Duck {
 public:
  RubberDuck()
      : Duck{std::make_shared<FlyNoWay>(), std::make_shared<QuackSqueek>()} {}
  std::string Display() const override;
};

#endif  // STRATEGY_RUBBERDUCK_H_
