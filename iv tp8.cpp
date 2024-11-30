#include <iostream>
#include <string>
using namespace std;
bool Palabra(const string& cadena, const string& palabra) {
return cadena.find(palabra);
}
string Resultado(bool encontrada) {
if (encontrada) {
return "La palabra se encuentra en la cadena.";
} else {
return "La palabra no se encuentra en la cadena.";
}
}
int main() {
string cadena, palabra;
cout << "Cadena: ";
getline(cin, cadena);  
cout << "Palabra: ";
cin >> palabra;
bool encontrada = Palabra(cadena, palabra);
cout << Resultado(encontrada) << endl;
return 0;
}
