#include <iostream>

using namespace std;
int main()
{
    int i, j, x, y;
    string z;
    cout<<"podaj ilo�� wierszy "<<endl;
    cin>>x;
    cout<<"podaj ilo�� symboli "<<endl;
    cin>>y;
    cout<<"podaj symbol "<<endl;
    cin>>z;
    for(i=1; i<=x; i++) {
            for(j=1; j<=y; j++){
               cout<<z;
            }
            cout<<endl;
    }

    return 0;
}
