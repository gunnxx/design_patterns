#include <gtest/gtest.h>

#include <memory>
#include <string>

#include "strategy/Duck.h"
#include "strategy/FlyNoWay.h"
#include "strategy/MallardDuck.h"
#include "strategy/QuackSqueek.h"
#include "strategy/RubberDuck.h"

TEST(TestDuck, TestDuckPolymorphism) {
  Duck* duck;
  MallardDuck mallard;
  RubberDuck rubber;

  duck = &mallard;
  EXPECT_EQ("I am flying with wings!", duck->PerformFly());
  EXPECT_EQ("I am quacking by quacking!", duck->PerformQuack());
  EXPECT_EQ("I am a Mallard Duck", duck->Display());

  duck = &rubber;
  EXPECT_EQ("I cannot fly!", duck->PerformFly());
  EXPECT_EQ("I am quacking by squeeking!", duck->PerformQuack());
  EXPECT_EQ("I am a Rubber Duck", duck->Display());
}

TEST(TestDuck, TestDuckDynamicBehavior) {
  MallardDuck mallard;

  EXPECT_EQ("I am flying with wings!", mallard.PerformFly());
  EXPECT_EQ("I am quacking by quacking!", mallard.PerformQuack());

  EXPECT_TRUE(mallard.SetFlyBehavior(std::make_shared<FlyNoWay>()));
  EXPECT_TRUE(mallard.SetQuackBehavior(std::make_shared<QuackSqueek>()));

  EXPECT_EQ("I cannot fly!", mallard.PerformFly());
  EXPECT_EQ("I am quacking by squeeking!", mallard.PerformQuack());
}
