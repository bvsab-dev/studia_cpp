#include <iostream>

using namespace std;

int main()
{
    /*

    Napisz program w którym u¿ytkownik poda liczbê naturaln¹,
    a program odpowie czy podany rok jest przestêpny (rok jest przestêpny jeœli jest podzielny przez 4,
    ale jednoczeœnie nie jest podzielny przez 100 lub kiedy jest podzielny przez 400).
    */

    int rok;

    cout<<"Podaj rok a sprawdze czy jest przystepny: ";
    cin>>rok;

    if((rok %4==0&& rok %100 != 0 )|| rok%400 == 0) {//sprawdza warunki czy rok jest przystepny
        cout<<"Rok "<<rok<<" jest przystepny"<<endl;
    } else {
        cout<<"Rok "<<rok<<" nie jest przystepny"<<endl;
    }

    return 0;
}
