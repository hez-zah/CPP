#include "Harl.hpp"

void    Harl::debug()
{
    cout << "\033[0;33mDEBUG : \033[0;0m";
    cout << "I love having extra bacon for my 7XL-double-cheese-";
    cout << "triple-pickle-specialketchup burger. I really do!" << endl;
}

void    Harl::info()
{
    cout << "\033[0;34mINFO : \033[0;0m";
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void    Harl::warning()
{
    cout << "\033[0;32mWEARING : \033[0;0m";
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    cout << "years whereas you started working here since last month." << endl;
}

void    Harl::error()
{
    cout << "\033[0;31mERROR : \033[0;0m";
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::complain(std::string level)
{
    int     i;
    Harl    h;
    string lvl[4] = {"debug", "info", "warning", "error"};
    p_ft p[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = -1;
    while (++i < 4)
    {
        if (lvl[i] == level)
            (h.*p[i])();
    }
}
