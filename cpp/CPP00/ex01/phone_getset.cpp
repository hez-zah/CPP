#include "phonebook.hpp"

void    Contact::set_f_name(string name)
{
    this->f_name = name;
}

string  Contact::get_f_name()
{
    return (this->f_name);
}

void    Contact::set_l_name(string name)
{
    this->l_name = name;
}

string  Contact::get_l_name()
{
    return (this->l_name);
}

void    Contact::set_nb_phone(string name)
{
    this->nb_phone = name;
}

string  Contact::get_nb_phone()
{
    return (this->nb_phone);
}
void    Contact::set_d_secret(string name)
{
    this->d_secret = name;
}

string  Contact::get_d_secret()
{
    return (this->d_secret);
}

void    Contact::set_nick_name(string name)
{
    this->nick_name = name;
}

string  Contact::get_nick_name()
{
    return (this->nick_name);
}

void    Phonebook::set_index(int nb)
{
    this->index = nb % 8 + 1;
}

int Phonebook::get_index()
{
    return (this->index);
}
