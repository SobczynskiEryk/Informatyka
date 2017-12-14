#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

 int a;
 int b;
int c;
int d;
int main(){
cout<<"od zera do jakiego przedzialu maja zostac wylosowane 3 liczba:";
cin>>d;

 srand(time(NULL));
a=rand()%d+1;
 cout<<a<<endl;
b=rand()%d+1;
 cout<<b<<endl;
 c=rand()%d+1;
 cout<<c<<endl;

 cout<<"liczby w kolejnosci rosnacej: ";
 if(a>b){
    if(a>c){
        if(b>c)
            cout<<a<<","<<b<<","<<c<<".";
        else
            cout<<a<<","<<c<<","<<b<<".";

    }
    else
        cout<<c<<","<<a<<","<<b<<".";

 }
 else if(b>c){
    if (c>a)
        cout<<b<<","<<c<<","<<a<<".";
        else
            cout<<b<<","<<a<<","<<c<<".";
 }
else
 cout<<c<<","<<b<<","<<a<<".";
    return 0;
}
