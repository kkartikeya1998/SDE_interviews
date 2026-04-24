#include <iostream>

#include "ConcretePrototype.h"


int main() {
    ConcretePrototype* prototype_obj = new ConcretePrototype("Generic Name", 10, 100, 1000);
    std::cout << "[Original prototype] " << prototype_obj->to_string() << std::endl;
    
    ConcretePrototype* cloned_obj = dynamic_cast<ConcretePrototype*>(prototype_obj->clone());
    std::cout << "[Clone before modification] " << cloned_obj->to_string() << std::endl;

    cloned_obj->set_param(2000);
    std::cout << "[Clone after modification] " << cloned_obj->to_string() << std::endl;

    delete(prototype_obj);
}