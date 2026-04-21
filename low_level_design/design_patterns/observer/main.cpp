#include <iostream>

#include "ConcreteObservable.h"
#include "ConcreteObservers.h"


int main() {
    ConcreteObservable* subject = new ConcreteObservable();


    IObserver* obs1 = new ConcreteObserver1();
    IObserver* obs2 = new ConcreteObserver2();

    subject->addObserver(obs1);
    subject->addObserver(obs2);

    subject->trigger_random_event();
    subject->trigger_random_event();
    subject->trigger_random_event();

    delete(obs1);
    delete(obs2);
    delete(subject);
}