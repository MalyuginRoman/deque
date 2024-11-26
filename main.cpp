#include <iostream>
#include <queue>

#include "CommandMove.h"
#include "CommandRotate.h"

int main()
{
    std::queue<ICommand*> cmd;
    CommandMove *cmd_move = new CommandMove;
    cmd_move->getStr("1");
    CommandRotate *cmd_rotate = new CommandRotate;
    cmd_rotate->getStr("2");
    cmd.push(cmd_move);
    cmd.push(cmd_rotate);
    while(!cmd.empty())
    {
        cmd.front()->execute();
        cmd.pop();
    }
    std::cout << std::endl;
}
