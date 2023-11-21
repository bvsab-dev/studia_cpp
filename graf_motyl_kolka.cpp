#include <iostream>

using namespace std;

int motyl(int n) {

    if(n==1) return 1;
    if(n==2) return 5;
    return motyl(n-1)+2*(n-1);


}

int kolka(int n) {
    if(n==1) return 3*n;
    else return kolka(n-1)+(n-1)+2;

}

int strzalki(int n) {
    if(n==1) return 2*n;
    else return strzalki(n - 1) + (2 * n - 1) + 1;

}

int main()
{
 int n;
    cout<<"Podaj numer: ";
    cin>>n;
    cout<<endl;
    cout<<"Ilosc kolek budujacych motyla: "<<motyl(n)<<endl;

    cout<<"Ilosc strzalek w grafie: "<<strzalki(n)<<endl;
    cout<<"Ilosc kolek w grafie: "<<kolka(n)<<endl;

    return 0;
}
