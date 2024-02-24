#include "HumanB.hpp"

HumanB::HumanB(string name) : name_b(name)
{
    cout << "\033[0;32mHumanB " << this->name_b << " Created with no weapon\033[0;0m" << endl;
}

HumanB::~HumanB()
{
    cout << "\033[0;31m" << this->name_b << " dead\033[0;0m" << endl;
}

void    HumanB::attack()
{
    cout << this->name_b << " attacks with their " << (this->weapon_b)->getType() << endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon_b = &weapon;
}
