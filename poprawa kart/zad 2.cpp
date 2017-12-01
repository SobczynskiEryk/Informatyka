#include <iostream>
#include <string>

using namespace std;

int main()

{   string haslo, haslotwo;
    int licznik = 1;
    haslo="zsk";
    for (int i=0; i<=2; i++){
        cout<<"wypisz haslo ";
    cin>>haslotwo;
    if(haslo==haslotwo)
        cout<<"poprawne haslo"<<"zgadles za:" << licznik<<endl;
        else
        cout<<"bledne haslo"<<endl;
        licznik++;
    }
return 0;
  }



