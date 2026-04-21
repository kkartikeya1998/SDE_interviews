#include <algorithm>
#include <cstdlib>

#include "ConcreteObservable.h"

void ConcreteObservable::addObserver(IObserver* observer) {
    if(!observer) return;
    if(std::find(observers.begin(), observers.end(), observer) != observers.end()) return;   // avoid duplicates

    observers.push_back(observer);

}


void ConcreteObservable::removeObserver(IObserver* observer) {
    if(!observer) return;
    
    auto it = std::find(observers.begin(), observers.end(), observer);
    if(it != observers.end()) observers.erase(it);
}

void ConcreteObservable::notifyObservers() {
    for(IObserver* observer : observers) observer->update();
}


void ConcreteObservable::trigger_random_event() {   // just some random things
    int ran = std::rand() % 15;
    rando += ran;
    if(rando % 2 == 0) this->notifyObservers(); 

    rando %= 100;
}