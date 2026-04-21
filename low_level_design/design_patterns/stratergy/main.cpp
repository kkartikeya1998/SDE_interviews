#include "BehaviourContext.h"
#include "ConcreteStratergies.h"
#include <vector>

int main() {
    std::vector<BehaviourContext*> vec;
    vec.push_back(new BehaviourContext(new Behaviour1()));
    vec.push_back(new BehaviourContext(new Behaviour2()));
    vec.push_back(new BehaviourContext(new Behaviour3()));
    for(auto& b : vec) {
        b->executeBehaviour();
    }
    
    return 0;
}

// g++ main.cpp ConcreteStratergies.cpp -o app