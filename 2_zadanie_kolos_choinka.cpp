#include <iostream>
using namespace std;

int main() {
   int a,h;

   cout<<"Podaj a: ";
   cin>>a;
   cout<<"Podaj h: ";
   cin>>h;
   cout<<endl;
    for(int l=0; l<a; l++) {
        for(int i =0; i<h;i++) {
        
            for(int k =0; k<h-i-1; k++) {
            cout<<" ";
        }


            for(int j =0; j<2*i+1; j++) {
                cout<<"*";
            
        }
        //cout<<"*";
        cout<<endl;
        
    }
    cout<<endl;
}
    return 0;
}