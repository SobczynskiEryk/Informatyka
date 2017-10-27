#include <iostream>
#include <math.h>

using namespace std;
int x;
int main()
{
    double y;
cout<<"wypisz x:";
cin>>x;
if (x<1)
   y=x*2;
else{
    switch(x){
case 1:
    y=-10;
    break;
    case 3:
        y=pow(x-1,4);
        break;
    case 6:
        y=sqrt(x-4);
        break;
    default:
        y=0;

    }
}

cout<<"funkcja f(x) wynosi "<<y;
    return 0;
}
