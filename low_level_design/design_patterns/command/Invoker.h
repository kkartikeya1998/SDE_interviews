#pragma once

#include "ICommand.h"

class Invoker {
private:
    ICommand* command;
    bool command_executing;

public:
    Invoker() {
        command = nullptr;
        command_executing = false;
    }
    void setCommand(ICommand* command) {
        this->command = command;
        command_executing = false;
    }

    void execute_command() {
        if(command == nullptr) return;
        if(command_executing) return;

        command->execute();
        command_executing = true;
    }

    void undo_command() {
        if(command == nullptr) return;
        if(!command_executing) return;

        command->undo();
        command_executing = false;
    }
};