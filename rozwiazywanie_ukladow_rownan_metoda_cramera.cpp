#include <iostream>

using namespace std;

int main()
{
    /*
    Zaprojektuj algorytm rozwišzywania układu równań liniowych postaci
    a1 x + b1 y = c1
    a2 x + b2 y = c2
    */
    //skrypt dziala o opraciu o metode wyznacznikow cramera wiecej na stronie matemaksa

    float x,y,x2,y2,w,wx,wy,ww1,ww2;//zmienne potrzebne do obliczen gdzie ww to wyraz wolny

    cout<<"Witaj rozwiazywanie rownan czas rozpoczac!"<<endl;

    cout<<"Podaj mi x przy pierwszym rownaniu: ";
    cin>>x;
    cout<<endl;
    cout<<"Podaj mi y przy pierwszym rownaniu: ";
    cin>>y;
    cout<<endl;
    cout<<"Podaj mi x przy drugim rownaniu: ";
    cin>>x2;
    cout<<endl;
    cout<<"Podaj mi y przy drugim rownaniu: ";
    cin>>y2;
    cout<<endl;
    cout<<"Podaj mi wyraz wolny z pierwszego rownania: ";
    cin>>ww1;
    cout<<endl;
    cout<<"Podaj mi wyraz wolny z drugiego rownania: ";
    cin>>ww2;

    w = (x*y2)-(x2*y);//obliczenia zgodne z metoda wyznacznikow
    wx = (ww1*y2)-(ww2*y);
    wy = (x*ww2)-(x2*ww1);
    if(w == 0) {
        if(wx == 0&&wy == 0) {
            cout<<"Uklad nieoznaczony nieskonczenie wiele rozwiazan"<<endl;
        }else {
        cout<<"Uklad sprzeczny brak rozwiazan"<<endl;
        }
    } else {
        cout<<"x= "<<wx/w<<" "<<"y= "<<wy/w<<endl;
     }

    return 0;
}


