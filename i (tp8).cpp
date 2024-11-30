#include <iostream>
#include <string>
using namespace std;
int suma(int numero1 , int numero2){
int suma=numero1+numero2;
return suma;
}
int resta (int numero1 , int numero2){
int resta=numero1-numero2;
return resta;}
int multiplicacion (int numero1 , int numero2){
int multiplicacion=numero1*numero2;
return multiplicacion;}
int division (int numero1 , int numero2){
int division=numero1/numero2;
return division;
}
int main () {
char opcion;
int total;
int numero1;
int numero2;
int resultado1, resultado2, resultado3, resultado4;
cout << "Ingrese el primer numero: ";
cin >> numero1;
cout << "Ingrese el segundo numero: ";
cin >> numero2;
resultado1 = suma(numero1, numero2);
resultado2 = resta(numero1, numero2);
resultado3 = multiplicacion(numero1, numero2);
resultado4 = division(numero1, numero2);
cout << "El resultado de la suma es: " << resultado1 << endl;
cout << "El resultado de la resta es: " << resultado2 << endl;
cout << "El resultado de la multiplicacion es: " << resultado3 << endl;
if (numero2 != 0) {
cout << "El resultado de la division es: " << resultado4 << endl;
}
return 0;
}



