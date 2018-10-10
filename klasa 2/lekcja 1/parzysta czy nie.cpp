#include <iostream>

using namespace std;
bool parzysta (int n){
if (n%2==0) return true;
return false;
}

int main()
{
int a;
cout<<"podaj liczbe: ";
cin>>a;
cout<<parzysta (a);

    return 0;
}
