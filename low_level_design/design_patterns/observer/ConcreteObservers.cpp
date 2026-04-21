#include "ConcreteObservers.h"

#include <iostream>

void ConcreteObserver1::update() {
    std::cout << "Pushed update to Observer1\n";
}

void ConcreteObserver2::update() {
    std::cout << "Pushed update to Observer2\n";
}