

#include <iostream>
using namespace std;
int cuenta(int base, int potencia){
int resultado=1;
for (int i=1; i<=potencia; i++) {
resultado*=base;
}
return resultado;
}
int main(){
int base, resultado, potencia;
cout<<"Ingrese el numero a potenciar: ";
cin>>base;
cout<<"Ingrese la potencia: ";
cin>>potencia;
resultado = cuenta(base, potencia);
cout<<base<<" elevado a "<<potencia<<" es: "<<resultado<<endl;
}

 
