#pragma once

#include "IObservable.h"

class ConcreteObserver1 : public IObserver {
public:
    void update() override;
};


class ConcreteObserver2 : public IObserver {
public:
    void update() override;
};