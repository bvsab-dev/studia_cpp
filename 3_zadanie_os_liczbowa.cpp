#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double liczba,temp;
    int spr = 0;
    do{
        cin>>liczba;

        if(spr == 0 ) {
            if( liczba == 2023 ) {
                cout<<"Nie podano liczb"<<endl;//dla pierwszego obrotu petli sprawdz czy podana liczba nie jest rowna 2023 jesli jest rowna zatrzymaj dzialanie programu i wypisz komunikat
                break;
            }
            spr++;//jesli powyzszy warunek nie jest spelniony zwieksz spr o jeden tak aby warunek juz sie nie wykonywal
            temp = liczba;//przypisz do zmiennej temp liczbe podana przez uzytkownika
        }

        if(abs(liczba-2023) < abs(temp-2023) && liczba !=2023) { //policz wartosc bezwzgledna w ten sposob znajdziemy ktora z liczb jest blizej 2023
            temp = liczba;//jesli warunek speliony przypisz temp liczbe
            //w duzym skrocie porownuje ktora liczba jest mniejsza czyli jest blizej 2023 i nastepnie przypisuje ja do temp 
        }
        
    }while(liczba!=2023);

    cout<<temp;
    return 0;
}
