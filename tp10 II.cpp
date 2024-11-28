#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int aleatorio(int var){
return rand()%22700;
}
int main(){
int cantidad, var;
srand(time(NULL));
cout<<"el limite de numeros aleatorios es de 22700."<<endl;
cout<<"Ingrese la cantidad de numeros aleatorios:";
cin>>cantidad;
for(int i=1; i<=cantidad; i++){
cout<<aleatorio(var)<<endl;
}
}
