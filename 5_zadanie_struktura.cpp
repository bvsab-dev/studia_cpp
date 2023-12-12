#include <iostream>
using namespace std;

struct lokomotywa {

    int vmax;
    char naped;
    float masa;
};//definicja struktury

int szybka(lokomotywa szb[], int rozmiar) {
    int index = 0;//poczatkowy index ustaw na zero od tego zaczyna sie tablica
    
    for(int i = 1; i < rozmiar; i++) {//zacznij od elementu 1
        if(szb[i].vmax > szb[index].vmax) {//porownaj czy element i jest wiekszy od elementu index czyli obecnie przypisanej najwiekszej wartosci
            index = i;//jesli tak to przypisz do zmiennej index wartosc i
        }
    }

    return index;
}


int main() {
    lokomotywa lokus;
    lokomotywa tab[5] = {{100,'e',21.98},{215,'s',28.78},{99,'p',100.78},{300,'i',20.99},{98,'p',56.78}};//definicja tablicy stuktur
    cout<<szybka(tab,5);//podaj tablice na ktorej ma operowac funkcja oraz jej rozmiar
     
    return 0;
}
