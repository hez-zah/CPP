#include "Weapon.hpp"

Weapon::Weapon(string typ): type(typ)
{
}

Weapon::~Weapon()
{
}

string  Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(string typ)
{
    this->type = typ;
}
