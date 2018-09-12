#include <iostream>
#include <cstdlib>
#include<cmath>

using namespace std;
int potega(int a,int n)
{
 int p=1;
 for(int i=1;i<=n;i++)
 p=p*a;
 return p;
}
int main(){


    int a;
    cin>>a;
    cout<<potega(a,3)<<endl;
    return 0;
}
