#include <iostream>
#include <cstdlib>
#include<cmath>

using namespace std;
int nwd (int a,int b){
while(a!=b)
    if(a>b)
    a=a-b;
else
    b=b-a;
    return a;
}
int main(){


cout<<nwd(1000, 10);
    return 0;
}
