#include <iostream>

using namespace std;
//silnia zostanie policzona maksymalnie do !65 powy�ej 65 wystepuje b��d przepe�nienia stackoverflow silnia wychodzi poza zakres

unsigned long long silnia(int n) {

 if(n == 0 || n == 1) return 1;
 else return n*silnia(n-1);
}

int main()
{
    int n;

    cout<<"Podaj liczbe a ja wylicze silnie: ";
    cin>>n;
    cout<<endl;
    cout<<silnia(n);

    return 0;
}
