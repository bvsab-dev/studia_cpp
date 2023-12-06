#include <iostream>
using namespace std;

struct lokomotywa {

    int vmax;
    char naped;
    float masa;
};

int szybka(lokomotywa szb[], int rozmiar) {
    int index = 0;
    
    for(int i = 1; i < rozmiar; i++) {
        if(szb[i].vmax > szb[index].vmax) {
            index = i;
        }
    }

    return index;
}


int main() {
    lokomotywa lokus;
    lokomotywa tab[5] = {{100,'e',21.98},{215,'s',28.78},{99,'p',100.78},{300,'i',20.99},{98,'p',56.78}};
    cout<<szybka(tab,5);
     
    return 0;
}
