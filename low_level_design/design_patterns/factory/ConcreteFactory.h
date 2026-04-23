#pragma once

#include "IFactory.h"
#include "ConcreteProduct.h"

class Product1_Factory : public IFactory {
public:
    AProduct* create_product(const std::string& type) override {
        if (type == "Standard")
            return new Product1_A();
        else if (type == "Premium")
            return new Product1_B();
        return nullptr;
    }
};

class Product2_Factory : public IFactory {
public:
    AProduct* create_product(const std::string& type) override {
        if (type == "Standard")
            return new Product2_A();
        else if (type == "Premium")
            return new Product2_B();
        return nullptr;
    }
};