#ifndef OBSERVER_STRUCT_PAYLOAD_H_
#define OBSERVER_STRUCT_PAYLOAD_H_

// Payload is problematic because it is a hard-coded type. We can improve this
// using Strategy Pattern, by making Payload as an Interface. See Subject and
// WeatherData! Because of the hard-coding, we can only think of WeatherData as
// the only child of Subject because Payload only contains weather-related data.
// Imagine if Payload is Interface and we can benefit from its
// "polymorphic-ness i.e. Payload -> WeatherDataPayload, CarDataPayload, etc

struct Payload {
  float temperature;
  float humidity;
  float pressure;
};

#endif  // OBSERVER_STRUCT_PAYLOAD_H_
