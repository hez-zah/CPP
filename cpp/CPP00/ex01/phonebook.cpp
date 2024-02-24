#include "phonebook.hpp"

void    start_PhoneBook()
{
    cout << "|******************************************************|\n|" << setw(55) << "|" << endl;
    cout << "|                  Welocome to phonenook               |\n|" << setw(55) << "|" << endl;
    cout << "|**********************   MENU   **********************|" << endl;
    cout << "|for save a new contact write --> ADD                  |" << endl;
    cout << "|for display a specific contact write --> SEARCH       |" << endl;
    cout << "|for exit write --> EXIT                               |" << endl;
    cout << "|******************************************************|\n" << endl;
}

int main()
{
    int         i;
    string      str;
    Phonebook   phon;

    start_PhoneBook();
    i = -1;
    while (1)
    {
        cout << "make your choice > ";
        getline(cin , str);
        if (str == "EXIT")
        {
            cout << "\x1B[36m" << "Exit PhoneBook" << endl;
            break;
        }
        else if (str == "ADD")
            phon.add_contact(phon, ++i);
        else if (str == "SEARCH")
            phon.search_contact(phon);
    }
}
