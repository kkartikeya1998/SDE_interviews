#pragma once

#include <iostream>

class ATemplate {
protected:
    virtual void seq_operation1() {
        std::cout << "[ITemplate] Performing Operation 1\n";
    }

    virtual void seq_operation2() = 0;
    virtual void seq_operation3() = 0;

    void seq_operation4() {
        std::cout << "[ITemplate] Performing Operation 4\n";
    }

public:
    virtual ~ATemplate() = default;
    virtual void template_method() final {
        seq_operation1();
        seq_operation2();
        seq_operation3();
        seq_operation4();
    }
};
