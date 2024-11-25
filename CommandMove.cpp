#include <iostream>
#include "CommandMove.h"

CommandMove::CommandMove()
{}

void CommandMove::execute()
{
    std::cout << "Start execute of CommandMove" << std::endl;
}

void CommandMove::getStr(std::string value)
{
    this->str = value;
}
