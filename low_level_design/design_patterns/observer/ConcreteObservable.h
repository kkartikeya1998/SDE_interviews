#pragma once

#include "IObservable.h"

class ConcreteObservable : public IObservable {
protected:
    int rando;
public:
    void addObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;
    void notifyObservers() override;

    void trigger_random_event();
};