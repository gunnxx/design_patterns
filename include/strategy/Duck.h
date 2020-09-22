#ifndef STRATEGY_DUCK_H_
#define STRATEGY_DUCK_H_

#include <memory>
#include <string>

#include "strategy/interface/FlyBehavior.h"
#include "strategy/interface/QuackBehavior.h"

class Duck {
 public:
  Duck() {}
  Duck(std::shared_ptr<FlyBehavior> fb, std::shared_ptr<QuackBehavior> qb)
      : fly_behavior_{fb}, quack_behavior_{qb} {}

  virtual std::string Display() const = 0;

  std::string PerformQuack() const;
  std::string PerformFly() const;
  bool SetFlyBehavior(std::shared_ptr<FlyBehavior> fb);
  bool SetQuackBehavior(std::shared_ptr<QuackBehavior> qb);

 private:
  std::shared_ptr<FlyBehavior> fly_behavior_ = nullptr;
  std::shared_ptr<QuackBehavior> quack_behavior_ = nullptr;
};

#endif  // STRATEGY_DUCK_H_
