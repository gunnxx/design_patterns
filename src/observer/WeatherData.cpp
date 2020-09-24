#include "observer/WeatherData.h"

void WeatherData::SetPayload(const Payload& payload) {
  temperature_ = payload.temperature;
  humidity_ = payload.humidity;
  pressure_ = payload.pressure;

  NotifyObservers(payload);
}
