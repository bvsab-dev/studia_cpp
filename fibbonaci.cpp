#include <iostream>

using namespace std;


unsigned long long fib(int n) {

 if(n == 1 || n == 2) return 1;
  else return fib(n-1)+fib(n-2);

}

//ciag fibonnaciego zlota liczba rekurencyjnie
int main()
{
    int n;
    while(true) {
    cout<<"Podaj wyraz ciagu a ja go wypisze: ";
    cin>>n;
    cout<<fib(n)<<endl;
 }
    return 0;
}
