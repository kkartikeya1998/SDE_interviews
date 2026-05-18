#include "Leaf.h"
#include "Composite.h"

int main() {
    IComponent* root = new Composite("Root");
    IComponent* leaf1 = new Leaf("L11");
    IComponent* node1 = new Composite("Node1");

    IComponent* leaf2 = new Leaf("L21");
    IComponent* leaf3 = new Leaf("L31");

    // dynamic cast needed because the interface does not define 
    // add_child() function so the compiler only knows
    // IComponent* and not Composite*
    dynamic_cast<Composite*>(root)->add_child(node1);
    dynamic_cast<Composite*>(root)->add_child(leaf1);

    dynamic_cast<Composite*>(node1)->add_child(leaf2);
    dynamic_cast<Composite*>(node1)->add_child(leaf3);


    root->operation(0);

    
    delete leaf1;
    delete leaf2;
    delete leaf3;
    delete node1;
    delete root;

    return 0;
}