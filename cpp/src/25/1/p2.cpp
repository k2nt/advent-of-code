#include <iostream>
#include <string>

int parseCommand(std::string& cmd)
{
    return (cmd[0] == 'L' ? -1 : 1) * std::stoi(cmd.substr(1));    
}

int main()
{
    int count = 0;

    std::string cmd;
    while (std::cin >> cmd)
    {
        int d = parseCommand(cmd);        
    }
}
