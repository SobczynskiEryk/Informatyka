#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int x,h,p,q;
int main()
{
    double y;
  p=-5;
  q=10;
  srand(time(NULL));
  x=p+rand()%(q-p+1);
  if (x<7)
    y=pow(x,3)+1;
  else {
    switch(x){
case 7:
    y=cos(x-1);
    break;
case 9:
    y=sqrt(3*x);
    break;
default:
    y=-8*x;
    }
  }
cout<<"funkcja f(x) wynosi "<<y;
    return 0;
}
