
#include <iostream>

using namespace std;
int silnia (int n)
{
    int s=1;
    for(int i=2;i<=n;i++)
        s*=i;
    return s;
}
int main()
{
    int x;
cin>>x;
cout<<x<<"!="<<silnia(x)<<endl;
return 0;
}
