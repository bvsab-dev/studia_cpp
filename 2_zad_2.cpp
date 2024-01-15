#include <iostream>

using namespace std;


int main() {

    int n;

    cout<<"Podaj wielkosc tablicy: ";
    cin>>n;

    int *tab = new int[n]; //tablica dynamiczna

    int i = 0;
    int liczba = -5;//poczatkowa wartosc zmiennej liczba gdyz mamy przedzial od -5 do nieskonczonosci
    while(i!=n) {
        if(liczba >= -5 && liczba % 2 == 0 && liczba % 3 != 0 && liczba % 7 != 0) {
            tab[i] = liczba;//przypisywanie liczby do danego elementu tablicy
            i++;
            /*
                tutaj w instrukcji warunkowej jest sprawdzanie warunkow
                czyli czy liczba jest wieksza rowna od -5
                liczba jest parzysta oraz czy liczba nie jest podzielna przez 3 i 7
                jezeli jakas liczba jest podzielna przez 3 lub 7 to znaczy ze sa to wielokrotnosci tych liczb
            */
        }
        liczba++;
    }


    for(int j = 0; j<n; j++) {
        cout<<"Element: "<<j<<": "<<tab[j]<<endl;//wypisywanie elementow tablicy
    }

    delete[] tab;//zwalnianie obszaru pamieci odpowiedzialnego za tablice dynamiczna
    return 0;
}
