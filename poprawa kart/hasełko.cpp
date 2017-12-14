#include <iostream>
#include <string>
using namespace std;

int main(){
 string haslo, haslop;
 int licznik=1;
 int i;
haslo="zsk";
for( i=0; i<=2; i++){
cout<<"wypisz haslo: ";
cin>>haslop;
cout<<" "<<endl;
if(haslop==haslo){
    cout<<"udalo ci sie odgadnac za "<<licznik<<" razem"<<endl;
    i=3;}
    else
    cout<<"nie udalo ci sie odgadnac hasla"<<endl;
licznik++;
}

    return 0;
}
