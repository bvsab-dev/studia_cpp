#include <iostream>
using namespace std;

int main() {
   int a,h;

   cout<<"Podaj a: ";
   cin>>a;
   cout<<"Podaj h: ";
   cin>>h;
   cout<<endl;
    for(int l=0; l<a; l++) {//wykonajuje sie tyle razy czyli to nasze a
        for(int i =0; i<h;i++) {//rysuj spacje poki i <h
        
            for(int k =0; k<h-i-1; k++) { //rysuje spacje tyle razy np dla pierwszego obrotu petli gdzie h jest rowne 3 narysuje 2 spacje potem jedna a potem wcale gdyz warunek nie bedzie juz spelniony
            cout<<" ";
        }


            for(int j =0; j<2*i+1; j++) {//rysuj gwiazdki nieparzyscie np gdzie h jest rowne 3 narysuje na poczatek 1 gwiazdke potem 3 potem 5
                cout<<"*";
            
        }
        
        cout<<endl;
        
    }
    cout<<endl;
}
    return 0;
}
