#include "Invoker.h"
#include "ConcreteCommand.h"
#include "Receiver.h"

int main() {
    Receiver1* rec1 = new Receiver1();
    Receiver2* rec2 = new Receiver2();
    Receiver3* rec3 = new Receiver3();
    

    Invoker* invoker = new Invoker();

    invoker->setCommand(new ConcreteCommand1(rec1));
    invoker->execute_command();
    invoker->undo_command();

    invoker->setCommand(new ConcreteCommand2(rec2));
    invoker->execute_command();

    invoker->setCommand(new ConcreteCommand3(rec3));
    invoker->execute_command();
    invoker->undo_command();
}