#include <iostream>

using namespace std;

int main()
{
    int n; string bin="";
    cout<<"Podaj liczbe:"<<endl;
    cin>>n;
    while (n!=0)
    {
        if (n%2==0){
            bin="0"+bin;}
            else
            {
                bin="1"+bin;}
                n=n/2;
    };
    cout<<bin;
    return 0;
            }
