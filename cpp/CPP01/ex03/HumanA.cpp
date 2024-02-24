#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon): name_a(name), weapon_a(weapon)
{
    cout << "\033[0;32mHumanA " << this->name_a << " Created with ";
    cout << this->weapon_a.getType() << "\033[0;0m" << endl;
}

HumanA::~HumanA()
{
    cout << "\033[0;31m" << this->name_a << " dead\033[0;0m" << endl;
}

void    HumanA::attack()
{
    cout << this->name_a << " attacks with their " << (this->weapon_a).getType() << endl;
}
