#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Podaj 2 liczby aby znalezc ich wspolny dzielnik: "<<endl;
    cin>>a>>b;
    while (a!=b) {
        if(a>b)
            a-=b;
        else
        b-=a;
    }
    cout<<a<<endl;
    return 0;
}
