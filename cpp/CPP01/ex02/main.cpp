#include <iostream>
#include <string>

using namespace std;

int main()
{
    string  str;
    string  *PTR;
    string  &REF = str;

    str = "HI THIS IS BRAIN";
    PTR = &str;

    cout << "\033[0;34mprint The memory address\033[0m" << endl;
    cout << &str << endl;
    cout << PTR << endl;
    cout << &REF << endl;
    cout << "\033[0;33mprint The value\033[0m" << endl;
    cout << str << endl;
    cout << *PTR << endl;
    cout << REF << endl;
}
