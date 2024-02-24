#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Weapon
{
    private:
        string  type;
    public:
        Weapon(string typ);
        ~Weapon();
        string  getType();
        void    setType(string type);
};

#endif
