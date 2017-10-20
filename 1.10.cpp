#include <iostream>

using namespace std;

int main()
{
    double x=0, y=1;
    if (x)
        x++;
    //x=1 bo x++ to to samo co x+1, a ze wzglêdu ¿e x=0, to x+1 -> x=1
    else if (x+y)
        y*=x+3;
    //y*=x+3 -> y=y*(x+3)
    else if (y)
        x-=y*3;
    //x-=y*3 -> x=x-(3*y)
    x+=y;
    //x+=x
    cout<<"x = "<<x<<"\ty = "<<y<<endl;
}
