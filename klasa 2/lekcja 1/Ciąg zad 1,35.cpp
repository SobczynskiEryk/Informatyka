#include <iostream>

using namespace std;

double a(int n)
{
if (n==1) return 0.5;
if (n==2)return 1;
return 3*a(n-1)+a(n-1);
}
int main(){
    int x;
    cin>>x;
    for (int i=1;i<=x;i++)
        cout<<"a("<<i<<")="<<a(i)<<endl;
    return 0;
}
