#include "observer/CurrentConditionDisplay.h"

#include <sstream>

bool CurrentConditionDisplay::Update(const Payload& payload) {
  temperature_ = payload.temperature;
  humidity_ = payload.humidity;

  std::stringstream ss;
  ss << "Temp: " << temperature_ << " deg C \t"
     << "Humidity" << humidity_ << std::endl;
  display_string_ = ss.str();

  return true;  // I know. This is kind of dumb ...
}

const std::string& CurrentConditionDisplay::Display() const {
  return display_string_;
}
