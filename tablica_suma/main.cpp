/*#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;


 int funkcja_suma (int t[], int rozmiar)
    {
        int i=0;
        int suma=0;
        do
        {
            suma+=t[i];
            i++;
        }while (i<rozmiar);

        return suma;
    }


int main()
{
    int a, licznik;

    srand(time(NULL));

    int tablica [999];
    licznik=0;

    do
    {
        a=(rand()%7)+4;
        tablica [licznik]=a;
        cout<<"wylosowane liczby to: "<< tablica[licznik]<<endl;
        licznik++;
    } while (licznik<999);

    cout << "Podales nastepujace liczby: ";
    licznik = 0;

    do
    {
        cout << tablica [licznik] << ", ";
        licznik++;
    } while( licznik<999);


    funkcja_suma (tablica, 999);
    licznik=0;
    int suma1=0;

       for (licznik=0; licznik<999; licznik++)
       {
           suma1+=tablica[licznik];
       }


    cout<<endl<<endl<<"Suma wszystkich liczb to= "<<suma1;

    return 0;
}
*/


#include <iostream>
#include <time.h>

using namespace std;

void suma_przekatnych(int tab[][], int N, int M)
{
    int suma = 0;
    srand(time(NULL));

    for(int i=0, int j=0; j<M; j++)
    {
       for(i=0; i<N; i++)
       {
           tab[i][j]=(rand()%100+1);
       }
    }
    cout<<tab[i][j]<<endl;
}

int main()
{
    int a, b;
    int t[][];

    cin>>"Wprowadz a: ";
    cin>>"Wprowadz b: ";

    suma_przekatnych(t, a, b);

}

