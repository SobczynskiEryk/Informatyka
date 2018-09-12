#include <iostream>
#include <cstdlib>
#include<cmath>

using namespace std;
void linia(int n, string s){
for (int i=0;i<n;i++)
    cout<<s;
}
int n;
    string a;
    int m;
    string s;
    int main()
{
    cout<<"wypisz liczbe znakow: ";
    cin>>n;
    cout<<"wypisz znak: ";
    cin>>a;
    cout<<"wypisz liczbe znakow: ";
    cin>>m;
    cout<<"wypisz liczbe znak: ";
    cin>>s;
linia(n,a);
cout<<endl;
linia(m,s);

    return 0;
}
