#include <iostream>
#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>


using namespace std;


int main()

{
 //dec, hex, oct,//
 int k;
 string bin="";
 cout<<"wpisz liczbe:";
 cin>>k;
double x=100.123456789;
cout<<"k = " <<k<<endl;
cout<<"konwersja systemow liczbowych: ";cout<<"\n";
cout<<"\n szesnastkowy = "<<hex<<k<<endl;
cout<<"\n osemkowy = "<<oct<<k<<endl;
cout<<"\n dziesietny = "<<dec<<k<<endl;
while (k!=0)
    {
        if (k%2==0){
            bin="0"+bin;}
            else
            {
                bin="1"+bin;}
                k=k/2;
    };
    cout<<"\n binarny = "<<bin<<endl;

  return 0;
}
