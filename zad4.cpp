#include <iostream>
using namespace std;


struct uzytkownik{

    string nick;
    int id;
    int l_znajomych;
    int wielkosc_tablicy;
    int *znajomi;
    bool uzalezniony;

};


void uzupelnij_dane(uzytkownik *osoba) {
    cout<<"Nick: ";
    cin>>osoba->nick;
    cout<<endl<<"ID osoby: ";
    cin>>osoba->id;
    cout<<endl<<"liczba znajomych: ";
    cin>>osoba->l_znajomych;
    osoba->wielkosc_tablicy=osoba->l_znajomych;
    cout<<endl<<" Czy uzalezniona? ";
    cin>>osoba->uzalezniony;
    cout<<endl;
    osoba->znajomi = new int[osoba->wielkosc_tablicy];

    for(int i =0; i<osoba->wielkosc_tablicy; i++) {
        cout<<"Podaj id znajomego: ";
        cin>>osoba->znajomi[i];
    }

}

void usun_uzytkownika(uzytkownik *osoba) {
    osoba->nick =" ";
    osoba->id = -1;
    osoba->l_znajomych = -1;
    delete[] osoba->znajomi;
    osoba-> uzalezniony = false;

}
/*
void dodaj_znajomosc(uzytkownik *osoba1, uzytkownik *osoba2) {

    osoba1->znajomi+=osoba1->znajomi[osoba2->id];
    osoba2->znajomi+=osoba2->znajomi[osoba1->id];

}*/
int main()
{
    uzytkownik person;
    uzupelnij_dane(&person);

    cout<<person.nick<<" "<<person.id<<" "<<person.l_znajomych<<" "<<person.uzalezniony<<" "<<person.znajomi[0]<<endl;
usun_uzytkownika(&person);
cout<<person.nick<<" "<<person.id<<" "<<person.l_znajomych<<" "<<person.uzalezniony<<" "<<person.znajomi[0]<<endl;
    return 0;
}
