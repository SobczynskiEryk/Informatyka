#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
int main()
{
double x=1234;
 for(int i=1; i<=3; i++)
 {
    cout<<"login: ";
    cin>>x;
    if (x==1234)
    {
        cout<<"zalogowany";
        return 0;
    }
 }
    return 0;
}
