#pragma once

#include <iostream>

#include "ATemplate.h"

class ConcreteTemplateImpl1 : public ATemplate {
protected:
    void seq_operation2() override {
        std::cout << "[ConcreteTemplateImpl1] Performing operation 2\n";
    }

    void seq_operation3() override {
        std::cout << "[ConcreteTemplateImpl2] Performing operation 3\n";
    }
};

class ConcreteTemplateImpl2 : public ATemplate {
protected:
    void seq_operation1() override {
        std::cout << "[ConcreteTemplateImpl2] Performing operation 1\n";
    }

    void seq_operation2() override {
        std::cout << "[ConcreteTemplateImpl2] Performing operation 2\n";
    }

    void seq_operation3() override {
        std::cout << "[ConcreteTemplateImpl2] Performing operation 3\n";
    }

    
};