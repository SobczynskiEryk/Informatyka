#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

 int a;
 int b;

int main(){
cout<<"od zera do jakiego przedzia³u maj¹ zostaæ wylosowane 3 liczba:";
cin>>b;

 srand(time(NULL));
for (int i=1; i<=3; i++){
a = rand()%b+1;
 cout<<a<<endl;
}

    return 0;
}
