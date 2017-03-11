#include <iostream>

using namespace std;

string login, haslo;
int main()
{
    cout << "Witaj w naszym serwisie - zaloguj sie!" << endl;
    cout << endl << "Podaj login: ";
    cin >> login;

    cout << endl << "Podaj haslo: ";
    cin >> haslo;

    if ((login=="admin")&&(haslo=="piotrek"))
    {
       cout << endl << "Zostales zalogowany";
    }
    else
    {
        cout << endl << "Niepoprawny login lub haslo";
    }
    return 0;
}
