#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i=5,j=9;
    int *wsk1, *wsk2;
    wsk1=&i;        //(1)
    wsk2=&j;        //(2)
    cout<<"wskaznik wsk1= "<<*wsk1<<endl;
    cout<<"wskaznik wsk2= "<<*wsk2<<endl<<endl;
    wsk1=wsk2;      //(3)
    cout<<"wskaznik wsk1 teraz= "<<*wsk1<<endl;
    cout<<"wskaznik wsk2 teraz= "<<*wsk2<<endl;
    getchar();
    return 0;
}
