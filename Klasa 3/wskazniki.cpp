#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i=13;
    int j=20;
    int *wsk1, *wsk2;
    int a=0;
    wsk1=&i; //wska�nik wsk1 wskazuje na zmienn� i
    wsk2=&j; //wska�nik wsk2 wskazuje na zmienn� j
    cout<<"Zmienna 'a' ma wartosc: "<<a<<endl;
    a=*wsk1 + *wsk2; //(1) modyfikacja warto�ci a
    cout<<"Teraz 'a' ma wartosc: "<<a<<endl;
    cout<<"Zmienna 'i' ma wartosc: "<<i<<endl;
    *wsk1=*wsk1+3; //(2)modyfikacja warto�ci zmiennej i
    cout<<"Teraz 'i' ma wartosc: "<<i<<endl;
    cout<<"Zmienna 'j' ma wartosc: "<<j<<endl;
    *wsk2=*wsk1; //(3) modyfikacja warto�ci zmiennej j
    cout<<"Teraz 'j' ma wartosc: "<<j<<endl;
    getchar();
    return 0;
}
