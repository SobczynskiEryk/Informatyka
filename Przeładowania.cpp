#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;
int obliczsume(int a){
return a;
}
int obliczsume(int a, int b){
return a+b;
}
int obliczsume(int a, int b, int c){
return a+b+c;
}
void wypisz(int a){
cout<<"liczba calkowita: "<<a<<endl;
}
void wypisz(double a){
cout<<"liczba rzeczywista: "<<a<<endl;

}
void wypisz(char a){
cout<<"znak: "<<a<<endl;
}
double oblicz(int a, double b){
return a+b;
}
double oblicz(double a, double b){
return a+b;
}
double oblicz(int a,double b, double c){
return (a+b)/c;
}
int main()
{
    int x=2, y=5, z=10;
    double k=5.6;
    double j=1.5;
    char znak='j';
    cout<<obliczsume(z)<<endl;
    cout<<obliczsume(z,x)<<endl;
    cout<<obliczsume(z,z,x)<<endl;
    wypisz(x);
    wypisz(k);
    wypisz(z);
    wypisz(znak);
    cout<<oblicz(x,k)<<endl;
    cout<<oblicz(x,y)<<endl;
cout<<oblicz(k,j)<<endl;
cout<<oblicz(x,y,k)<<endl;
    return 0;
}
