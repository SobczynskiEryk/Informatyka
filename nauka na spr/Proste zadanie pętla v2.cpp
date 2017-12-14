#include <iostream>

using namespace std;

int main()
{
    int a;
int b;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>a;
    cout<<"Podaj koniec przedzialu: ";
    cin>>b;
    for (int i=a; i<=b; i++)
        if (i<b)
        cout<<i<<",";
    else
        cout<<i<<".";
    return 0;
}
