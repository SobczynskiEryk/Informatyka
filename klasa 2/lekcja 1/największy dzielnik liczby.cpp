#include <iostream>

using namespace std;
void dzielniki (int n){
int b;
for(b=1;b<=n;b++)
{if (n%b==0)
cout<<b<<", ";

}
}
int main()
{
int a;
cout<<"podaj liczbe: ";
cin>>a;
dzielniki(a);

    return 0;
}
