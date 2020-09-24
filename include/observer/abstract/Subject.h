#ifndef OBSERVER_ABSTRACT_SUBJECT_H_
#define OBSERVER_ABSTRACT_SUBJECT_H_

#include <memory>
#include <utility>
#include <vector>

#include "observer/interface/Observer.h"
#include "observer/struct/Payload.h"

class Subject {
 private:
  // Observer Pattern: 1-to-many relationship
  // Subject will connect with multiple Observer
  std::vector<std::unique_ptr<Observer>> observers_;

 public:
  void RegisterObserver(std::unique_ptr<Observer>* obs) {
    // pointer to unique_ptr can be replaced with non-const reference
    // , but using non-const reference will make cpplint complains
    observers_.emplace_back(std::move(*obs));
  }

  // void RemoveObserver(std::unique_ptr<Observer>* obs) {
  //   observers_.erase(std::remove(observers_.begin(), observers_.end(), *obs),
  //                    observers_.end());
  // }

  void NotifyObservers(const Payload& payload) const {
    for (auto& observer : observers_) observer->Update(payload);
  }

  virtual void SetPayload(const Payload& payload) = 0;
};

#endif  // OBSERVER_ABSTRACT_SUBJECT_H_
