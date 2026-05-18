#pragma once

#include <iostream>
#include <vector>

#include "IComponent.h"

class Composite : public IComponent {
private:
    std::vector<IComponent*> children;

public:
    Composite(std::string n) : IComponent(n) {}

    void operation(int indent) override {
        for(int i = 0; i < indent; i++) std::cout << "\t";
        std::cout << "[Composite] " << name << " performing operation...\n";        
        
        for(auto& child : children) {
            child->operation(indent+1);
        }
    }

    void add_child(IComponent* c) {
        children.push_back(c);
    }
};