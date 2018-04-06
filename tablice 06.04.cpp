#include <iostream>
#include <iomanip>

using namespace std;
void wstaw(int T[], int ile){
for(int i=0; i<ile; i++){
cout<<"Podaj "<<i+1<<"element tablicy";
cin>>T[i];

}
}
void wyswietl(int T[], int ile){
for(int i=0; i<ile; i++){
    cout<<T[i]<<" ";
}}
void wczytaj(int *T, int n){
for (int i=0; i<n; i++){
cout<<"T["<<i<<"] = ";
cin>>T[i];
}}

void wypisz (int T[], int n){
cout<<"elementy w tablicy: "<<endl;
for(int i=0; i<n; i++)
cout<<setw(7)<<T[i];
cout<<endl;
}
void wypiszodwrotnie(int T[], int n){
cout<<"elementy tablicy odwrotnie: "<<endl;
for(int i=n-1; i>=0; i--)
    cout<<setw(4)<<T[i];
    cout<<endl;
}

int elementydodane(int T[], int n){
cout<<"elementy tablicy dodane do siebie: ";
int suma;
for(int i=0; i<n; i++){
    suma += T[i];
}
return suma;
}
int iloczynwiekszych5(int T[], int n){
cout<<"iloczyn liczb wiekszych ni¿ 5: ";
int iloczyn=1;
for(int i=0; i<n; i++){
        if(T[i]>5)
        iloczyn *= T[i];
}
if(iloczyn<5)
    iloczyn=0;
return iloczyn;
}

int main()
{
    int T[5] = {1,2,33,2,5};
    int tablica[10];
    wczytaj(tablica,10);
        wyswietl(tablica,10);
        wypisz(tablica,10);
        wypiszodwrotnie(tablica,10);
        cout<<elementydodane(tablica,10)<<endl;
        cout<<iloczynwiekszych5(tablica,10)<<endl;
    return 0;
}
