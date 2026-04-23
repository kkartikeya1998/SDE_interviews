#include <iostream>
#include "ConcreteFactory.h"

int main() {
    Product1_Factory prod1_factory;
    Product2_Factory prod2_factory;

    AProduct* first_product = prod1_factory.create_product("Standard");
    if (first_product) {
        first_product->use_product();
        delete first_product;
    }

    std::cout << "--------------------------------------\n";

    AProduct* second_product = prod2_factory.create_product("Standard");
    if (second_product) {
        second_product->use_product();
        delete second_product;
    }

    std::cout << "--------------------------------------\n";

    AProduct* third_product = prod1_factory.create_product("Premium");
    if (third_product) {
        third_product->use_product();
        delete third_product;
    }

    std::cout << "--------------------------------------\n";

    AProduct* fourth_product = prod2_factory.create_product("Premium");
    if (fourth_product) {
        fourth_product->use_product();
        delete fourth_product;
    }

    return 0;
}