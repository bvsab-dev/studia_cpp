#include <iostream>

using namespace std;

int main()
{
/* Napisz program, który pyta użytkownika o liczbę całkowitą. Następnie jeśli jest ona numerem miesiąca
program wypisuje porę roku, w której jest dany miesiąc (przyjmujemy, że grudzień, styczeń i luty to zima,
następnie każda pora roku to kolejne 3 miesiące).Jeśli liczba ma inną wartość niż od 1 do 12 to program ma wypisać informacje,
 że to nie jest numer miesiąca. Można użyć instrukcji switch, case.*/


    int nr_miesiaca;
    cout<<"Podaj mi miesiac a ja napisze Ci jaka to pora roku: ";
    cin>> nr_miesiaca;

    switch(nr_miesiaca) {
        case 12:
        case 1:
        case 2:
            cout<<"Zima!"<<endl;
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Wiosna!"<<endl;
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Lato!"<<endl;
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Jesien!"<<endl;
            break;
        default:
            cout<<"Nie ma takiego miesiaca!"<<endl;
            break;

    }

    return 0;
}
