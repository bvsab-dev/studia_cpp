#include <iostream>
#include <fstream>
using namespace std;
/*
napisz program w ktorym zdefiniujeesz strukture lokomotywa struktura powinna skaldac sie z pol
seria - typu napisowego oznaczajace serie lokomotywy
vmax typu calkowitego oznaczajace predkosc maksymalna sprawnej lokomotywy
naped typu znakowego mogacego przyjmowac wartosci 'e' - elektryczny, 's' - spalinowy, 'p' - parowy
masa typu zmiennoprzecinkowego oznaczajaca mase lokomotywy
stan typu logicznego oznaczajace czy lokomotywa jest sprawna
Nastepnie napisz funkcje ktora w tablicy struktur typu lokomotywa wyszuka najszybsza przyjmujemy ze niesprawna
lokomotywa ma predkosc 0 a nie jej vmax z lokomotyw wzroci wskaźnik na najszybsza lokomotywe
nastepnie program
otiwera plik lomokotywy.txt 
wczytuje z pliku liczbe lokomotyw
w kolejnych liniach pliku sa dane o lokomotywach
nastepnie korzysta z funkcji wyszukujacej najszybsza lokomotywe i zapisuje te informacje do pliku najszybsza.txt
*/

struct lokomotywa {

    string seria;
    int vmax;
    char naped;
    bool stan;
    float masa;
};

int fastest(lokomotywa *tab, int n) {

    int fast = -1;
    for(int i =0; i<n; i++) {
      if(tab[i].stan == true) {
         if(tab[i].vmax > tab[fast].vmax|| fast==-1) {
            fast = i ;
         } 
      }
    }
    if(fast == -1) {
        return 0;        
    } else {
        return fast;
    }
}

int main() {

    fstream plik;
    plik.open("lokomotywy.txt");
    ofstream plik2;
    plik2.open("najszybsza.txt");

    int n;
    plik >> n;
    lokomotywa *tab = new lokomotywa[n];
    for(int i =0; i<n; i++) {
        plik >> tab[i].seria >> tab[i].vmax >> tab[i].naped >> tab[i].stan >> tab[i].masa;
    }

    for(int i =0; i<n; i++) {
        cout << tab[i].seria << " " << tab[i].vmax << " " << tab[i].naped << " " << tab[i].stan << " " << tab[i].masa << endl;
    }

    int fast = fastest(tab, n);
    cout<<fast<<endl;
    if(fast==0) {
        plik2<<"Brak sprawnych lokomotyw";
    } else {
    plik2 << tab[fast].seria << " " << tab[fast].vmax << " " << tab[fast].naped << " " << tab[fast].stan << " " << tab[fast].masa << endl;
    }
    
    plik.close();
    plik2.close();
    delete [] tab;

    return 0;
}