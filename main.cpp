#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"Podaj liczbe a podam ci jej wszystkie dzielniki ";
    cin>>a;
    cout<<endl;

    for(int i =1; i<=a;i++) {
        if(a%i == 0) {
            cout<<"Dzielnik liczby "<<a<<": "<<i<<endl;
        }
    }
    return 0;
}
