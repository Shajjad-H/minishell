#ifndef __MSH__COMMAND__HPP__
#define __MSH__COMMAND__HPP__

#include <string>

class Command
{
private:
    std::string filename;
    std::string * args;
public:
    Command(/* args */);
    ~Command();
};

#endif
