#include <iostream>

using namespace std;
//wydawanie reszty zachlannie
int main()
{
    int waluta[8] = {200,100,50,20,10,5,2,1};

    int reszta,ilosc_monet;
    while(true) {
    cout<<"Podaj reszte do wydania: ";
    cin>>reszta;
    cout<<endl;

    for(int i =0; i<8;i++) {
        if(waluta[i]<=reszta) {
            ilosc_monet = reszta/waluta[i];
            cout<<"Ilosc monet do wydania: "<<ilosc_monet<<" Wartosc monety: "<<waluta[i]<<endl;
            reszta = reszta % waluta[i];
        }
    }
    }
    return 0;
}
