#include <iostream>
#include <fstream>

using namespace std; 

int main() {

    
    fstream plik;
    plik.open("dane.txt");//otwieranie plikow

    if(plik.is_open()) {//sprawdzanie czy plik jest otwarty
        float srednia = 0;
        float temp;
        int ilosc_liczb = 0;

        while(!plik.eof()) {//kiedy nie ma konca pliku
            plik >> temp;//wczytaj dana linie do temp
            ilosc_liczb++;//zwieksz ilosc liczb o 1
            srednia+= temp;//dodaj do sredniej dana linie z pliku
        }

        cout<<"Srednia z liczb z pliku: "<<srednia/ilosc_liczb<<endl;//wypisz srednia tych liczb
    }else {
        cout<<"Plik nie istnieje lub nie udalo sie go otworzyc :( "<<endl;
    }

    plik.close();//zamkniecie pliku

    return 0;
}