#include <iostream>

using namespace std;



int main()
{
    //sortowanie tablicy

    int tablica[10] = {1,5,6,7,5,8,6,4,8,0};

    cout<<"Tablica nie posortowana: ";

    for(int i =0; i<9;i++) {
        cout<<tablica[i]<< " ";
    }

    cout<<endl;

    for(int i=0;i<9;i++) {
        for(int j =0;j<9;j++) {
            if(tablica[j]>tablica[j+1]) {
                swap(tablica[j], tablica[j+1]);
            }
        }
    }

    cout<<"Posortowana tablica ";

    for(int i=0;i<10;i++) {
        cout<<tablica[i]<<" ";
    }

    return 0;
}
