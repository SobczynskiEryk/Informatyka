#include <iostream>
using namespace std;

int main(){
 int a;
 int bin=1;
 int system;
 cout<<"wpisz liczbe do przekonwertowania: ";
 cin>>a;
 cout<<"podaj liczbe systemu do którego bêdzie konwertowana liczba: ";
 cin>>system;
 while (a>=bin)
 {
    cout<<a%system;
 a=a/system;
 }
 cout<<" "<<endl;
 cout<<"liczby s¹ podane od ty³u";
    return 0;
}
