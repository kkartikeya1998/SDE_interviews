#include <iostream>

#include "ConcreteTemplate.h"

int main() {
    ConcreteTemplateImpl1* templ1 = new ConcreteTemplateImpl1();
    ConcreteTemplateImpl2* templ2 = new ConcreteTemplateImpl2();

    templ1->template_method();

    std::cout << "--------------------------------------\n";

    templ2->template_method();
    delete(templ1);
    delete(templ2);
}