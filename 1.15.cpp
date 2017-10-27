#include <iostream>

using namespace std;
int x,y,z;
int main()
{
    cout<<"podaj 3 liczby ca³kowite: ";
    cin>>x>>y>>z;
    if (x%2==1)
     cout<<"tak";
    else if (y%2==1)
        cout<<"tak";
   else if (z%2==1)
        cout<<"tak";
    else
        cout<<"nie";

    return 0;
}
