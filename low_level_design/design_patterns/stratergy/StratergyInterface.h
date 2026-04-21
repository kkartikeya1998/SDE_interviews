#pragma once
// stratergy interface
class BehaviourStratergy{
public:
    virtual ~BehaviourStratergy() = default;
    virtual void behave() = 0;
};