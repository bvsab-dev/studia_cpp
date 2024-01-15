#include <iostream>
#include <fstream>

using namespace std;

struct postac {

    string imie;
    char rasa;
    int sila;
    char *ekwipunek;//wskaznik na tablice char
    bool bohater;
    int zycie;

};


void dodaj(postac &hero) {//przekazanie orginalnej zawartosci struktury a nie jej kopii 

    cout<<"Podaj imie bohatera: ";
    cin>>hero.imie;
    cout<<endl<<"Podaj rase bohatera: ";
    cin>>hero.rasa;
    cout<<endl<<"Podaj sile bohatera: ";
    cin>>hero.sila;
    cout<<endl<<"Podaj ekwipunek bohatera: ";
    hero.ekwipunek = new char[hero.sila];
    for(int i = 0; i<hero.sila; i++) {
        cout<<"Wypelniasz teraz slot nr: "<<i+1<<" Pusty slot wstaw 0"<<endl;
        cin>>hero.ekwipunek[i];
    }
    cout<<endl<<"Podaj czy bohater jest dobry czy zly: ";
    cin>>hero.bohater;
    cout<<endl<<"Podaj HP bohatera: ";
    cin>>hero.zycie;

}

void usun(postac &hero) {//pseudo usuwanie czyli wyzerowanie wartosci zmiennych w strukturze
    hero.imie= "";
    hero.rasa= '\0';
    hero.sila = -1;
    delete [] hero.ekwipunek;
    hero.zycie = -1;
    hero.bohater = false;

}

int pancerz(postac hero) {
    int wartosc_pancerza = 0;
    for( int i = 0; i<hero.sila; i++) {
        if(hero.ekwipunek[i] == 'z' || hero.ekwipunek[i] == 'h' || hero.ekwipunek[i] == 'a' || hero.ekwipunek[i] == 'c') {
            wartosc_pancerza++;
            /*
                Jeśli w ekwipunku znajduje sie element pancerza skrotowo zapisywany tak jak w if zwieksz wartosc pancerza o 1
            */
        }
  }
  return wartosc_pancerza;
}

int main() {

    postac hero;
    char decyzja;
    ofstream plik;

    plik.open("postacie.txt");//otwarcie pliku

    if(!plik.good()) {//czy wszystko okej z plikiem
        cout<<"File error!"<<endl;
    }else {
        while(decyzja != 'y') {//jesli decyzja nie jest rowna y to wykonuj instrukcje
        dodaj(hero);

        plik <<hero.imie<<endl<<pancerz(hero)<<endl;//do pliku wpisz imie bohatera oraz wartosc jego pancerza
        usun(hero);//usun bohatera

        cout<<"Czy juz koniec? y/n: "<<endl;
        cin>>decyzja;
        }
        plik.close();//zamknij plik
    }

    return 0;
}
