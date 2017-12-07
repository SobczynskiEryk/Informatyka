#include <iostream>

using namespace std;

int main()

{
    int i;
    int x,y;
   cout<<"wypisz poczatek przedzialu: ";
   cin>>y;
   cout<<"\nwypisz koniec przedzialu: ";
   cin>>x;
   for(int i=y; i<=x; i++)
    if(i%2!=0){
    if(i==x||i==x-1)
        cout<<i<<".";
    else
        cout<<i<<",";}




   return 0;
    }





