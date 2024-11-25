#ifndef COMMANDROTATE_H
#define COMMANDROTATE_H
#include "ICommand.h"
#include <string>

class CommandRotate : public ICommand
{
public:
    CommandRotate();
    void execute() /*override*/;
    void getStr(std::string value);
private:
    std::string str;
};

#endif // COMMANDROTATE_H
