#ifndef OBSERVER_WEATHERDATA_H_
#define OBSERVER_WEATHERDATA_H_

#include "observer/abstract/Subject.h"
#include "observer/struct/Payload.h"

class WeatherData : public Subject {
 private:
  float temperature_;
  float humidity_;
  float pressure_;

 public:
  void SetPayload(const Payload& payload) override;
};

#endif  // OBSERVER_WEATHERDATA_H_
