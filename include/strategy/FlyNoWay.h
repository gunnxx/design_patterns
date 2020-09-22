#ifndef STRATEGY_FLYNOWAY_H_
#define STRATEGY_FLYNOWAY_H_

#include <string>

#include "strategy/interface/FlyBehavior.h"

class FlyNoWay : public FlyBehavior {
 public:
  std::string Fly() const override;
};

#endif  // STRATEGY_FLYNOWAY_H_
