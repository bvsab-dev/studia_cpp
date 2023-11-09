#include <iostream>

using namespace std;

int main()
{
/* Napisz program, który pyta u¿ytkownika o liczbê ca³kowit¹. Nastêpnie jeœli jest ona numerem miesi¹ca
program wypisuje porê roku, w której jest dany miesi¹c (przyjmujemy, ¿e grudzieñ, styczeñ i luty to zima,
nastêpnie ka¿da pora roku to kolejne 3 miesi¹ce).Jeœli liczba ma inn¹ wartoœæ ni¿ od 1 do 12 to program ma wypisaæ informacje,
 ¿e to nie jest numer miesi¹ca. Mo¿na u¿yæ instrukcji switch, case.*/


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
