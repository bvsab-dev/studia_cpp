#include <iostream>
#include <cctype>
using namespace std;

int zlicz(char *tab) {//jako arg przekazuje wzkaznik na tablice charow
    int male_litery = 0;
    for(int i=0; tab[i]!='\0'; i++) {//konczy petle gdy trafi na znak konca
        if(islower(tab[i])) {//sprawdzanie czy litera jest mala przy uzyciu funkcji islower
            male_litery++;
        }

    }
    return male_litery;
}

int main() {

    char zdanie[] = "Ala ma kotA\0";
    char zdanie2[] = "kot ma ale\0";//zapis char zdanie[] oznacza ze cpp automatycznie dopisze dlugosc tablicy
    cout<<zlicz(zdanie)<<endl;
    cout<<zlicz(zdanie2)<<endl;

    return 0;
}