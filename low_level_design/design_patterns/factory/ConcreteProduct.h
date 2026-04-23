#pragma once

#include <iostream>

#include "AProduct.h"

class Product1_A : public AProduct {
public:
    void use_product() override {
        std::cout << "[Product1_A] Using type 1 standard product\n";
    }
};


class Product2_A : public AProduct {
public:
    void use_product() override {
        std::cout << "[Product2_A] Using type 2 standard product\n";
    }
};


class Product1_B : public AProduct {
public:
    void use_product() override {
        std::cout << "[Product1_B] Using type 1 premium product\n";
    }
};


class Product2_B : public AProduct {
public:
    void use_product() override {
        std::cout << "[Product2_B] Using type 2 premium product\n";
    }
};

