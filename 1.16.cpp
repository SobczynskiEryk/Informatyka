#include <iostream>
#include <math.h>

using namespace std;
int x;
int main()
{
cout<<"wypisz x:";
cin>>x;
if (x<1)
    cout<<"f(x)="<<x*2;
else if (x==1)
cout<<"f(x)="<<-10;
else if (x==3)
    cout<<"f(x)="<<(pow((x-1),4));
else if (x==6)
    cout<<"f(x)="<<(sqrt(x-4));
else
    cout<<"f(x)="<<0;
    return 0;
}
