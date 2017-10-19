#include <iostream>

using namespace std;

int main()
{
int a, b, c, x;
   cout<<"podaj liczby a,b,c"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
   x=a;
   if(b<x) {
    x=b;
   }
   if (c<x) {
    x=c;
   }
   if (b<x) {
    x=b;
   }
   cout<<"Najmniejsza liczba to: "<<x<<endl;
    return 0;
}
