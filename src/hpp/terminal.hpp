


class Terminal
{
private:
    /* data */
public:
    Terminal(/* args */);
    ~Terminal();
    void get_input(const int fd = 0);
    void print_output(const int fd = 1);
    bool verify_cmd() const;
    void parse_cmd();
    bool execute_cmd();
    void run();
};

Terminal::Terminal(/* args */)
{
}

Terminal::~Terminal()
{
}
