#include "observer/StatisticsDisplay.h"

#include <sstream>

bool StatisticsDisplay::Update(const Payload& payload) {
  float temp = payload.temperature;
  float press = payload.pressure;

  min_temperature_ = temp < min_temperature_ ? temp : min_temperature_;
  max_temperature_ = temp > max_temperature_ ? temp : max_temperature_;

  min_pressure_ = press < min_pressure_ ? press : min_pressure_;
  max_pressure_ = press > max_pressure_ ? press : max_pressure_;

  std::stringstream ss;
  ss << "Pressure\t\tmin: " << min_pressure_ << "\t max: " << max_pressure_
     << "\nTemperature\tmin: " << min_temperature_
     << "\t max: " << max_temperature_ << std::endl;
  display_string_ = ss.str();

  return true;  // I know. This is kind of dumb ...
}

const std::string& StatisticsDisplay::Display() const {
  return display_string_;
}
