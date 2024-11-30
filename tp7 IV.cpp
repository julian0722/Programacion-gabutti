#include <iostream>
#include <string>
using namespace std;
int main (){
string cad1;
char cad2;
cout<< "ingrese una palabra: ";
cin>> cad1;
cout<<"que caracter busca: ";
cin>> cad2;
int contador=0;
for (int i=0; i < cad1.size(); i++)
if (cad1[i] == cad2) {
contador++;
}
cout << "El caracter " << cad2 << " aparece " << contador << " veces en la palabra" << endl;
 return 0;
}

