#pragma once

#include <string>

#include "AProduct.h"

class IFactory{
public:
    virtual AProduct* create_product(const std::string& type) = 0;
    virtual ~IFactory() = default;
};