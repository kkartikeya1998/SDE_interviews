#pragma once

#include <iostream>

class Receiver1{
public:
    void execute_command() {
        std::cout << "Receiver1 started operation.\n";
    }

    void undo_command() {
        std::cout << "Receiver1 stopped operation.\n";
    }
};


class Receiver2{
public:
    void execute_other_command() {
        std::cout << "Receiver2 started operation.\n";
    }

    void undo_other_command() {
        std::cout << "Receiver2 stopped operation.\n";
    }
};

class Receiver3{
public:
    void execute_third_command() {
        std::cout << "Receiver3 started operation.\n";
    }

    void undo_third_command() {
        std::cout << "Receiver3 stopped operation.\n";
    }
};

