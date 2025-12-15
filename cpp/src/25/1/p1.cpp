#include <iostream>
#include <string>

const int MOD = 100;

int delta(std::string cmd)
{
    return (cmd[0] == 'L' ? -1 : 1) * std::stoi(cmd.substr(1));
}

int move(int curPos, int d)
{
    curPos = (curPos + d) % MOD;
    return curPos < 0 ? curPos + MOD : curPos % MOD;
}

int main()
{
    int curPos = 50;
    int count = 0;

    std::string cmd;
    while (std::cin >> cmd)
    {
        int d = delta(cmd);
        curPos = move(curPos, d);
        count += curPos == 0;
    }

    std::cout << count << std::endl;
}
