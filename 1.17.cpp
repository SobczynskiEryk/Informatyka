#include <iostream>
#include <math.h>
using namespace std;
int x;
int main()
{
  cout<<"podaj x: ";
  cin>>x;
  if (x<7)
    cout<<"f(x)="<<((x*x*x)+1);
  else if (x==7)
    cout<<"f(x)="<<(cos(x-1));
  else if (x==9)
    cout<<"f(x)="<<(sqrt(3*x));
  else
    cout<<"f(x)="<<(-8*x);
    return 0;
}
