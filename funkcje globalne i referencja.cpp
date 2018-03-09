#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int a;
void oblicz1 (void) {
int a;
a=10;
cout<<"w funkcji o nazwie oblicz1: "<<a<<endl;
}
void oblicz2(void) {
a=20;
cout<<"w fukcji oblicz2: "<<a<<endl;
}
void oblicz3(int &z) {
z=-5;
cout<<"w funkcji oblicz3: "<<z<<endl;
}
void oblicz4(int z) {
z=-7;
cout<<"w funkcji oblicz4: "<<z<<endl;
}

int main()
{
    cout << "zmienna wynosi: "<<a << endl;
    oblicz1();
    cout<<"zmienna po wywolaniu funkcji wynosi "<<a<<endl;
    oblicz2();
    cout<<"zmienna a: "<<a<<endl;
    oblicz3(a);
    cout<<"zmienna a: "<<a<<endl;
    oblicz4(a) ;
    return 0;
}
