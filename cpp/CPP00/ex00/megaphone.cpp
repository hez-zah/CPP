#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac > 1)
    {
        i = 0;
        while (av[++i])
        {
            j = -1;
            while (av[i][++j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
                cout << av[i][j];
            }   
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    cout << '\n';
}
