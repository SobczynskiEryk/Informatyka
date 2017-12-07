#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba1;
int liczba2;
int liczba3;
int main(){

 srand(time(NULL));
 cout<<"3 wylosowane liczby to: ";
 liczba1=rand();
 cout<<liczba1<<",";
 liczba2=rand();
  cout<<liczba2<<",";
 liczba3=rand();
  cout<<liczba3<<"."<<endl;

  cout<<"Najwiêksza liczba to: ";
  if(liczba1<liczba2){
    if(liczba2>liczba3)
        cout<<liczba2;
        else
            cout<<liczba3;
  }
else if(liczba1>liczba3)
cout<<liczba1;






    return 0;
}
