#include <iostream>

using namespace std;
int x;
int y;
int z;
int main()
{
    cout<<"podaj najmniejsza liczbe z zakresu:";
    cin>>x;
    cout<<"podaj najwi�ksza liczbe z zakresu:";
    cin>>y;
    cout<<"podaj co kt�ra liczba ma zosta� wy�wietlona:";
    cin>>z;
  for(int i=x; i<=y; i=i+z)
    cout<<i<<endl;
    return 0;
}
