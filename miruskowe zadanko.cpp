#include <iostream>

using namespace std;
int x;
int y;
int z;
int main()
{
    cout<<"podaj najmniejsza liczbe z zakresu:";
    cin>>x;
    cout<<"podaj najwiêksza liczbe z zakresu:";
    cin>>y;
    cout<<"podaj co która liczba ma zostaæ wyœwietlona:";
    cin>>z;
  for(int i=x; i<=y; i=i+z)
    cout<<i<<endl;
    return 0;
}
