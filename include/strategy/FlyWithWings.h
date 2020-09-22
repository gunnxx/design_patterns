#ifndef STRATEGY_FLYWITHWINGS_H_
#define STRATEGY_FLYWITHWINGS_H_

#include <string>

#include "strategy/interface/FlyBehavior.h"

class FlyWithWings : public FlyBehavior {
 public:
  std::string Fly() const override;
};

#endif  // STRATEGY_FLYWITHWINGS_H_
