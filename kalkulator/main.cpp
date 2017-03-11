#include <iostream>

using namespace std;

float x, y;
int wybor;

int main()
{
    cout << "Podaj pierwsza cyfre: ";
    cin >> x;

    cout << "Podaj druga cyfre: ";
    cin >> y;

    cout << endl<< "Wybierz jedna z mo¿liwych operacji poprzez wybranie przypisanej do niej cyfry:" << endl;
    cout << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;

    cout << "Wybierz zadana operacje: ";
    cin >> wybor;
    cout << endl;
    cout << endl;

    if (wybor==1)
    {
        cout << "Suma = " << x+y;
    }
    else if (wybor==2)
    {
        cout << "Roznica = "<< x-y;
    }
    else if(wybor==3)
    {
        cout << "Iloczyn = " << x*y;
    }
    else if (wybor==4)
    {
        if (y==0) cout << "Nie dzielimy przez 0";
        else cout << "Iloraz = " << x/y;
    }
    else
    {
        cout << "Nie mozna wykonac takiej operacji";
    }


    return 0;
}
