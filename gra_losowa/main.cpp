#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Wymyslilem liczbe z zakresu 1..100. Zgadnij jaka to liczba!" << endl;
    srand(time(NULL));
    liczba=rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob=ile_prob+1;
        cout << "Podaj liczbe: ";
        cin >> strzal;

        if (strzal==liczba)
            cout << "Udalo sie! Wygrywasz! Udalo Ci sie odgadnac za "<<ile_prob<<" razem" << endl;

        else if (strzal>liczba)
            cout << "Za duzo (To Twoja "<<ile_prob<< " proba)" << endl;

        else if (strzal<liczba)
            cout << "Za malo (To Twoja "<<ile_prob<< " proba)" << endl;
    }

    system("pause");

    return 0;
}
