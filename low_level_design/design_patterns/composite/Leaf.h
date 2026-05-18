#pragma once

#include <string>
#include <iostream>

#include "IComponent.h"

class Leaf : public IComponent {
public:
    Leaf(std::string n) : IComponent(n) {}

    void operation(int indent) override {
        for(int i = 0; i < indent; i++)
            std::cout << "\t";

        std::cout << "[Leaf] " << name << " performing operation...\n";
    }
};