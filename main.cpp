#include <iostream>

using namespace std;

int main()
{
    //liczenie sumy od najmniejszej do najwiekszej miedzy nimi
    int a,b; //liczby miedzy ktorymi bedzie sumowana wartosc
    int temp;
    int result=0;
    cout<<"Podaj liczbe pierwsza: ";
    cin>>a;
    cout<<endl;
    cout<<"Podaj liczbe druga ";
    cin>>b;

    if(a>b) {
      temp = b;
      while(temp<=a) {
        result+= temp;
        temp++;
      }
      } else {
        temp = a;
        while(temp<=b) {
            result+=temp;
            temp++;
        }
      }
      cout<<"wynik= "<<result;

    return 0;
}
