#include <iostream>
#include <Windows.h>
using namespace std;
int mayor(int var1, int var2){
if(var1>var2){
cout<<"el numero "<<var1<<" es mayor que "<<var2<<endl;
}
else{
cout<<"el numero "<<var2<<" es mayor que "<<var1<<endl;
}
}
int main(){
int var1, var2;
cout<<"Ingrese un numero:";
cin>>var1;
cout<<"Ingrese otro numero:";
cin>>var2;
mayor(var1,var2);
}
