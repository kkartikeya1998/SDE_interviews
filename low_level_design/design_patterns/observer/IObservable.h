#pragma once

#include <vector>

#include "IObserver.h"

class IObservable {
protected:
    std::vector<IObserver*> observers;
public:
    virtual void addObserver(IObserver* observer) = 0;
    virtual void removeObserver(IObserver* observer) = 0;
    virtual void notifyObservers() = 0;
    virtual ~IObservable() = default;
};