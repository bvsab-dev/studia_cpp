#include <iostream>
using namespace std;

int main() {
    int n;
    int tablica[100] = {0};
    cout << "Podaj n: ";
    cin >> n;

    int i = 0;
    int temp = -4;

    while (i < 100 && temp >= -4) {
        if (temp <= n) { 
            if (temp % 4 != 0) {
                if (temp % 10 == 3 || temp % 10 == 6) {
                    tablica[i] = temp;
                    i++;
                }
            }
        }
        temp = temp +1; 
    }

    for (int i = 0; i < 100; i++) {
        if(tablica[i] != 0) {
        cout << tablica[i] <<endl;
        }
    }

    return 0;
}
