#include <iostream>
using namespace std;

int main() {
    int n;
    int tablica[100] = {0};//wypelnij tablice zerami
    cout << "Podaj n: ";
    cin >> n;

    int i = 0;
    int temp = -4;//zdefiniuj temp jako liczbe ktora jest najnizej z warunkow nasz warunek to -4<=temp<=n

    while (i < 100 && temp >= -4) {//wykonuj petle poki tablica nie jest pelna i temp spelnia warunek
        if (temp <= n) { //jesli temp jest mniejszy od n to
            if (temp % 4 != 0) {//jesli temp nie jest podzielny przez 4 wynika to z warunku zadania 
                if (temp % 10 == 3 || temp % 10 == 6) {//jesli cyfra jednosci (dlatego dzielimy przez 10 to nam zwroci cyfre jednosci) jest rowna 3 lub 6 to
                    tablica[i] = temp; //do danego elementu tablicy przypisz liczbe temp
                    i++;//przejdz do nastepnego elementu tablicy
                }
            }
        }
        temp = temp +1;//dodaj do temp jeden tak przechodzimy po kolejnych wyrazach wynika to z tresci zadania
    }

    for (int i = 0; i < 100; i++) {
        if(tablica[i] != 0) {//wypisz wszystkie elementy ktore nie sa zerem czyli wypisz te elementy ktore spelniaja warunek
        cout << tablica[i] <<endl;
        }
    }

    return 0;
}
