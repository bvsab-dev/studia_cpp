#include <iostream>

using namespace std;

int main()
{
/* Napisz program, kt�ry pyta u�ytkownika o liczb� ca�kowit�. Nast�pnie je�li jest ona numerem miesi�ca
program wypisuje por� roku, w kt�rej jest dany miesi�c (przyjmujemy, �e grudzie�, stycze� i luty to zima,
nast�pnie ka�da pora roku to kolejne 3 miesi�ce).Je�li liczba ma inn� warto�� ni� od 1 do 12 to program ma wypisa� informacje,
 �e to nie jest numer miesi�ca. Mo�na u�y� instrukcji switch, case.*/


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
