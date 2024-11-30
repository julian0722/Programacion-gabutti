#include <iostream>
#include <string>
using namespace std;
int main() {
string cad1;
cout << "ingrese una palabara: ";
getline(cin,cad1);
int longitud = cad1.length();
string Palabra_reves(longitud,'0');
for (int i = 0 ; i < longitud; ++i) {
 Palabra_reves[i] = cad1[longitud -1 -i];
}
cout<<Palabra_reves<<endl;
return 0;
}
