#include <iostream>

using namespace std;
int main()
{
int x,y;
cout<<"podaj pocz¹tek i koniec"<<endl;
cin>>x;
cin>>y;
if(x<y){
for(x; x<=y; x++){
cout<<x<<" ";
if (x%2==0){
        cout<<"- liczba parzysta"<<endl;}
else {
    cout<<"- liczba nieparzysta"<<endl;
}
}
}else{
cout<<"poda³eœ b³êdne dane";
}

    return 0;
}



Użytkownik podaje z klawiatury ilość liczb do wyświetlenia oraz przedział z jakiego liczby mają być wylosowane
