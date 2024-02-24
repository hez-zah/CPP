#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class   Contact
{
    private :
        string  f_name;
        string  l_name;
        string  nb_phone;
        string  nick_name;
        string  d_secret;
    public :
        //get
        string  get_f_name();
        string  get_l_name();
        string  get_nb_phone();
        string  get_nick_name();
        string  get_d_secret();
        //set
        void    set_f_name(string f_name);
        void    set_l_name(string f_name);
        void    set_nb_phone(string nb_phone);
        void    set_nick_name(string nick_name);
        void    set_d_secret(string d_secret);
};

class   Phonebook
{
    private :
        Contact pers[8];
        int     index;
    public :
        int     get_index();
        void    set_index(int);
        void    add_contact(Phonebook phon, int i);
        void    print_contact(Phonebook phon);
        void    search_contact(Phonebook phon);
};

void    start_PhoneBook();

#endif
