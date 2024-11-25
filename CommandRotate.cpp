#include <iostream>
#include "CommandRotate.h"

CommandRotate::CommandRotate()
{}

void CommandRotate::execute()
{
    std::cout << "Start execute of CommandRotate" << std::endl;
}

void CommandRotate::getStr(std::string value)
{
    this->str = value;
}
