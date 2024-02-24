#include "phonebook.hpp"

void    Phonebook::add_contact(Phonebook phon, int i)
{
    int     indx;
    string  str;
    string  name;

    phon.set_index(i);
    indx = phon.get_index() - 1;
    while (name == "")
    {
        cout << "Enter firest name : ";
        getline(cin, name);
        pers[indx].set_f_name(name);
    }
    while(1)
    {
        cout << "Enter last " << name << " name : ";
        getline(cin, str);
        pers[indx].set_l_name(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        cout << "Enter " << name << " nickname : ";
        getline(cin, str);
        pers[indx].set_nick_name(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        cout << "Enter " << name << " phone number: ";
        getline(cin, str);
        pers[indx].set_nb_phone(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        cout << "Enter " << name << " darkest secret: ";
        getline(cin, str);
        pers[indx].set_d_secret(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    cout << "\x1B[32m" << "Adding successfully" << "\x1B[0m" << endl;
}

void    ranking_column(string str)
{
    int x;

    x = 10 - str.length();
    if (str.length() <= 10)
    {
        while(x--)
            cout << " ";
        cout << str << "|";
    }
    else
        cout << str.substr(0, 9) << ".|";
}

void    Phonebook::print_contact(Phonebook phon)
{
    int i;

    i = -1;
    cout << " -------------------------------------------" << endl;
    cout << "|   index  |  f_name  |  l_name  | nickname |" << endl;
    cout << " -------------------------------------------" << endl;
    while (++i < 8)
    {
        if (phon.pers[i].get_f_name() == "" && i == 0)
        {
            cout << " -------------------------------------------" << endl;
            cout << "Phonebook is empty" << endl;
            break;
        }
        else if (phon.pers[i].get_f_name() == "")
            break;
        cout << "|    " << (i + 1) << "     |";
        ranking_column(phon.pers[i].get_f_name());
        ranking_column(phon.pers[i].get_l_name());
        ranking_column(phon.pers[i].get_nick_name());
        cout << endl;
        cout << " -------------------------------------------" << endl;
    }
}

int check_index(string str)
{
    if (str[1] == '\0' && (str[0] >= '0' && str[0] <= '9'))
        return(true);
    return(false);
}

void    Phonebook::search_contact(Phonebook phon)
{
    string  j;
    int     i;

    print_contact(phon);
    if (phon.pers[0].get_f_name() == "")
        return ;
    while (1)
    {
        cout << "Enter index : ";
        getline(cin, j) ;
        if (check_index(j) == false)
            continue ;
        i = -1;
        while(++i < 8)
        {
            if ((phon.pers[i].get_f_name() != "")  && (i + 1) == (j[0] - '0'))
            {
                cout << "\x1B[33m" << "\ncontact information ...." << "\x1B[0m" << endl;
                cout << "First Name: " << phon.pers[i].get_f_name() << endl;
                cout << "Last Name: " << phon.pers[i].get_l_name() << endl;
                cout << "Nickname: " << phon.pers[i].get_nick_name() << endl;
                cout << "Phone Number: " << phon.pers[i].get_nb_phone() << endl;
                cout << "Darkest Secret: " << phon.pers[i].get_d_secret() << endl;
                cout << "\x1B[33m" << "===========" << "\x1B[0m" << endl;
                return ;
            }
        }
    }
}
