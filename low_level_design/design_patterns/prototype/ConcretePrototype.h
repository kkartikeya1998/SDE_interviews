#pragma once

#include <string>

#include "IPrototype.h"

class ConcretePrototype : public IPrototype{
private:
    std::string str_priv_name;
    int n_priv_field1;
    int n_priv_field2;
public:
    int n_publ_field1;

    ConcretePrototype(const std::string& p1, int p2, int p3, int p4) : 
            str_priv_name(p1), n_priv_field1(p2), n_priv_field2(p3), n_publ_field1(p4) {
    }

    ConcretePrototype(const ConcretePrototype& prototype_obj) {
        str_priv_name = prototype_obj.str_priv_name;
        n_priv_field1 = prototype_obj.n_priv_field1;
        n_priv_field2 = prototype_obj.n_priv_field2;
        n_publ_field1 = prototype_obj.n_publ_field1;
    }

    IPrototype* clone() const override {
        IPrototype* clone_obj = new ConcretePrototype(*this);
        return clone_obj;
    }

    std::string to_string() {
        return "[" + std::to_string(reinterpret_cast<uintptr_t>(this)) + "]: " + 
                    str_priv_name + ", " + std::to_string(n_priv_field1) + ", " + std::to_string(n_priv_field2) + ", " + std::to_string(n_publ_field1); 
    }

    void set_param(int p) {
        n_publ_field1 = p;
    }
};