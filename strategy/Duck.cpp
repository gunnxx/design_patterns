#include "strategy/Duck.h"

std::string Duck::PerformQuack() const {
  if (quack_behavior_) return quack_behavior_->Quack();
  return "";
}

std::string Duck::PerformFly() const {
  if (fly_behavior_) return fly_behavior_->Fly();
  return "";
}

bool Duck::SetFlyBehavior(std::shared_ptr<FlyBehavior> fb) {
  fly_behavior_ = fb;
  return true;  // I know, this is kind of dumb ...
}

bool Duck::SetQuackBehavior(std::shared_ptr<QuackBehavior> qb) {
  quack_behavior_ = qb;
  return true;  // I know, this is kind of dumb ...
}
