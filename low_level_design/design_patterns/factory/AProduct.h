#pragma once

class AProduct{
public:
    virtual void use_product() = 0;
    virtual ~AProduct() = default;
};