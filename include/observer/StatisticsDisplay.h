#ifndef OBSERVER_STATISTICSDISPLAY_H_
#define OBSERVER_STATISTICSDISPLAY_H_

#include <limits>
#include <memory>
#include <string>

#include "observer/abstract/Subject.h"
#include "observer/interface/DisplayElement.h"
#include "observer/interface/Observer.h"
#include "observer/struct/Payload.h"

class StatisticsDisplay : public Observer, public DisplayElement {
 private:
  std::string display_string_;
  std::shared_ptr<Subject> subject_;

  using limF = std::numeric_limits<float>;

  float min_temperature_ = limF::infinity();
  float max_temperature_ = -limF::infinity();
  float min_pressure_ = limF::infinity();
  float max_pressure_ = -limF::infinity();

 public:
  explicit StatisticsDisplay(std::shared_ptr<Subject> s) : subject_{s} {
    std::unique_ptr<Observer> this_unique_ptr(this);
    subject_->RegisterObserver(&this_unique_ptr);
  }

  bool Update(const Payload& payload) override;
  const std::string& Display() const override;
};

#endif  // OBSERVER_STATISTICSDISPLAY_H_
