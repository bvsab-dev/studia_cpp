#include <iostream>
using namespace std;

int rekurencja(int n) {

    if(n==0) return 2;
    if(n==1) return 0;
    if(n==2) return 1;
    if(n>2) return rekurencja(n-1)-2*rekurencja(n-2)+rekurencja(n-3);
}

int iteracja(int n) {
    int a = 2;
    int b = 0;
    int c = 1;
    int wynik = 0;
    if(n==0) return 2;
    if(n==1) return 0;
    if(n==2) return 1;
    
       for (int i = 3; i <= n; ++i) {
        wynik = c - 2 * b + a;
        a = b;
        b = c;
        c = wynik;
    }
    return wynik;
}

int main() {

    cout<<rekurencja(5)<<endl;
    cout<<iteracja(5)<<endl;
    return 0;
}
