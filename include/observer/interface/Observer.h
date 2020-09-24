#ifndef OBSERVER_INTERFACE_OBSERVER_H_
#define OBSERVER_INTERFACE_OBSERVER_H_

#include "observer/struct/Payload.h"
#include "observer/abstract/Subject.h"

class Observer {
 public:
  virtual bool Update(const Payload& payload) = 0;
};

#endif  // OBSERVER_INTERFACE_OBSERVER_H_
