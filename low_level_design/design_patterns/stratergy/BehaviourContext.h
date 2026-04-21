#include "StratergyInterface.h"

class BehaviourContext
{
private:
    BehaviourStratergy* stratergy;

public:
    BehaviourContext(BehaviourStratergy* b) {
        this->stratergy = b;
    }

    void setStratergy(BehaviourStratergy* b) {
        this->stratergy = b;
    }

    void executeBehaviour() {
        stratergy->behave();
    }
};
