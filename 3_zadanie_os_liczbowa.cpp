#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double liczba,temp;
    int spr = 0;
    do{
        cin>>liczba;

        if(spr == 0 ) {
            if( liczba == 2023 ) {
                cout<<"Nie podano liczb"<<endl;
                break;
            }
            spr++;
            temp = liczba;
        }

        if(abs(liczba-2023) < abs(temp-2023) && liczba !=2023) {
            temp = liczba;
            
        }
        
    }while(liczba!=2023);

    cout<<temp;
    return 0;
}
