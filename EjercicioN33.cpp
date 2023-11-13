/*EJERCICIO N*33

 Escriba un programa que calcule el valor de: 1!+2!+3!+...n!.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int number, producto = 1, suma = 0;
  
  cout<<"Ingrese un digito: "<<endl;
  cin>>number;
  
  for(int i = 1; i <= number; i++){
    
    producto *= i;
    suma += producto;
  }
  
  cout<<"El factorial es: "<<suma;
  
  return 0;
}
