#include <iostream> 
#include <cctype>

using namespace std;

  /*
    1.
    Napisz funkcje która jako argument przyjmuje tablice znaków tzn wskaźnik na char tablica 
    jest zakonczona pustym bajtem funkcja ma znajdowac pierwsza cyfre w podanej tablicy
    wariant pelny 
    zwraca wskaznik na pierwsza cyfre lub null gdy nie ma cyfry
    2.
    napisz program ktory pobierze od uzytkownika liczbe n utworzy n elementowa tablice znakow i wypelnii ja
    kolejnymi malymi znakami alfabetu lacinskiego jesli n>26 to po z nastepuje kolejne a
    nastepnie wypisze na ekran zawartosc uzupelnionej tabeli kazda litere w osobnym wierszu
    */

int main()
{
    int n;
    cin>>n;
    char *tab = new char[n];
    
    for(int i =0; i<n; i++) {
        tab[i] = 'a' +i%26;
    }

     for(int i =0; i<n; i++) {
        cout<<tab[i]<<endl;
    }




    delete []tab;
    return 0;
}