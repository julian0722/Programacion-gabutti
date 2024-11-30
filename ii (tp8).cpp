#include <iostream>
#include <string>
using namespace std;
int contarPalabras(string frase) {
int separacion=0;
for (int i=0; i<frase.size();i++) {
if (frase.at(i)==' ') {
separacion++;
}
}
return separacion + 1; 
}
int main() {
string frase;
cout<<"Ingrese una frase" <<endl;
getline(cin,frase);
int palabras = contarPalabras(frase);
cout<<"La frase contiene: " <<palabras<< " palabras";
return 0;
}

