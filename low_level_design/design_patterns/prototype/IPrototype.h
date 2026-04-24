#pragma once


class IPrototype {
public:
    virtual IPrototype* clone() const = 0;
    virtual ~IPrototype() = default;
};