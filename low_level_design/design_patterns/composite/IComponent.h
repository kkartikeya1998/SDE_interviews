#pragma once

#include <string>

class IComponent {
protected:
    std::string name;
public:
    IComponent(std::string n) : name(n) {}
    virtual ~IComponent() = default;
    virtual void operation(int indent) = 0;
};