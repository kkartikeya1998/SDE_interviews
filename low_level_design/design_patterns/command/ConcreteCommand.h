#pragma once

#include "ICommand.h"
#include "Receiver.h"

class ConcreteCommand1 : public ICommand {
private:
    Receiver1* receiver1;

public:
    ConcreteCommand1(Receiver1* receiver) {
        receiver1 = receiver;
    }

    void execute() override {
        receiver1->execute_command();
    }

    void undo() override {
        receiver1->undo_command();
    }
};


class ConcreteCommand2 : public ICommand {
private:
    Receiver2* receiver2;

public:
    ConcreteCommand2(Receiver2* receiver) {
        receiver2 = receiver;
    }

    void execute() override {
        receiver2->execute_other_command();
    }

    void undo() override {
        receiver2->undo_other_command();
    }
};


class ConcreteCommand3 : public ICommand {
private:
    Receiver3* receiver3;

public:
    ConcreteCommand3(Receiver3* receiver) {
        receiver3 = receiver;
    }

    void execute() override {
        receiver3->execute_third_command();
    }

    void undo() override {
        receiver3->undo_third_command();
    }
};

