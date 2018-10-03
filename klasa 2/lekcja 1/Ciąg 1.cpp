#include <iostream>

using namespace std;

int silnia(int n)
{
    if (n==0) return 1;
    return silnia(n-1)*n;
}


int main(int argc, char** arvg)
{
    int x;
    cin>>x;
    for (int i=1;i<=x;i++)
        cout<<"a("<<i<<")="<<silnia(i)<<endl;
    return 0;
}
