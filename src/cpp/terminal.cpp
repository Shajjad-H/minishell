#include "terminal.hpp"
#include <string>
#include <iostream>
#include <termios.h>
//#include <unistd.h>
//#include <stdio.h>
//#include <conio.h>

Terminal::Terminal(const char * ternimal_name_p)
{
    this->terminal_name = ternimal_name_p;
    this->running = true;
    this->input = this->output = "";
}

Terminal::~Terminal()
{
    this->running = false;
}

void Terminal::run() 
{
    while (this->running) {

        this->get_input();
        
        this->parse_cmd();

        this->execute_cmd();

        this->print_output();
    }

}


void Terminal::get_input() {

    // * clear the last output
    // * we don't need anymore
    this->output = "";
    std::cin>>this->input;
}


bool Terminal::parse_cmd() {

    return true;
}

bool Terminal::execute_cmd() {

    if(this->input == "exit") {

        this->running = false;
        return true;
    }

    this->output = this->input + " executed sucessfully\n";

    return true;
}

void Terminal::print_output() {

    // * clear the output before printing
    // * because we dont need anymore
    this->input = "";
    std::cout<<this->output;

}