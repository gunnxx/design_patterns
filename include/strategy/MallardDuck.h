#ifndef STRATEGY_MALLARDDUCK_H_
#define STRATEGY_MALLARDDUCK_H_

#include <memory>
#include <string>

#include "strategy/Duck.h"
#include "strategy/FlyWithWings.h"
#include "strategy/QuackQuack.h"

class MallardDuck : public Duck {
 public:
  MallardDuck()
      : Duck{std::make_shared<FlyWithWings>(), std::make_shared<QuackQuack>()} {
  }
  std::string Display() const override;
};

#endif  // STRATEGY_MALLARDDUCK_H_
