#include <gtest/gtest.h>

#include <memory>

#include "observer/CurrentConditionDisplay.h"
#include "observer/StatisticsDisplay.h"
#include "observer/WeatherData.h"
#include "observer/abstract/Subject.h"
#include "observer/interface/Observer.h"
#include "observer/struct/Payload.h"

TEST(TestWeather, TestConstructors) {
  auto subj = std::make_shared<WeatherData>();
  auto stat = std::make_shared<StatisticsDisplay>(subj);
  auto curr = std::make_shared<CurrentConditionDisplay>(subj);

  EXPECT_EQ(2, (subj->observers).size());
  EXPECT_EQ(stat.get(), (subj->observers())[0].get());
  EXPECT_EQ(curr.get(), (subj->observers())[1].get());
}

TEST(TestWeather, TestRemoveObserverMethod) {
  auto subj = std::make_shared<WeatherData>();
  auto stat = std::make_shared<StatisticsDisplay>(subj);
  auto curr = std::make_shared<CurrentConditionDisplay>(subj);

  subj->RemoveObserver(stat);
  EXPECT_EQ(1, (subj->observers).size());
  EXPECT_EQ(curr.get(), (subj->observers())[0].get());

  subj->RemoveObserver(curr);
  EXPECT_EQ(0, (subj->observers).size());
}

TEST(TestWeather, TestWeatherDataSetPayloadMethod) {
  auto subj = std::make_shared<WeatherData>();
  auto stat = std::make_shared<StatisticsDisplay>(subj);
  auto curr = std::make_shared<CurrentConditionDisplay>(subj);

  Payload payload = {1, 2, 3};
  subj->SetPayload(payload);

  // CHECK DISPLAY_STRING_
}
