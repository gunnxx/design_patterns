#ifndef OBSERVER_INTERFACE_DISPLAYELEMENT_H_
#define OBSERVER_INTERFACE_DISPLAYELEMENT_H_

#include <string>

class DisplayElement {
 public:
  virtual const std::string& Display() const = 0;
};

#endif  // OBSERVER_INTERFACE_DISPLAYELEMENT_H_
