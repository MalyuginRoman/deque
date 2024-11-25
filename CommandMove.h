#ifndef COMMANDMOVE_H
#define COMMANDMOVE_H
#include "ICommand.h"
#include <string>

class CommandMove : public ICommand
{
public:
    CommandMove();
    void execute() /*override*/;
    void getStr(std::string value);
private:
    std::string str;
};

#endif // COMMANDMOVE_H
