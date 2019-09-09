#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int tab[5];
  cout<<"Kolejne elementy tablicy znajduja sie w komórkach: "<<endl;
  for(int i=0; i<5; i++)
    cout<<&tab[i]<<endl;
  getchar();
  return 0;
}
