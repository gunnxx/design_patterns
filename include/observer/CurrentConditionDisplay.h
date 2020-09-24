#ifndef OBSERVER_CURRENTCONDITIONDISPLAY_H_
#define OBSERVER_CURRENTCONDITIONDISPLAY_H_

#include <memory>
#include <string>

#include "observer/abstract/Subject.h"
#include "observer/interface/DisplayElement.h"
#include "observer/interface/Observer.h"
#include "observer/struct/Payload.h"

class CurrentConditionDisplay : public Observer, public DisplayElement {
 private:
  std::string display_string_;
  std::shared_ptr<Subject> subject_;

  float temperature_;
  float humidity_;

 public:
  explicit CurrentConditionDisplay(std::shared_ptr<Subject> s) : subject_{s} {
    std::unique_ptr<Observer> this_unique_ptr(this);
    subject_->RegisterObserver(&this_unique_ptr);
  }

  bool Update(const Payload& payload) override;
  const std::string& Display() const override;
};

#endif  // OBSERVER_CURRENTCONDITIONDISPLAY_H_
