#ifndef __MSH__TERMINAL__HPP__
#define __MSH__TERMINAL__HPP__

#include <string>
#include <vector>


class Terminal
{

protected:
    bool running;
    std::string input;
    std::string output;
    std::string terminal_name;
    std::vector<int> parsed_cmd;

    void get_input();
    void print_output();
    bool parse_cmd();
    bool execute_cmd();
public:
    Terminal(const char * ternimal_name);
    ~Terminal();
    void run();
};

#endif
