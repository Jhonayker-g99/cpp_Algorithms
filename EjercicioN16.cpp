/*EJERCICIO N*16

 Realice un programa que lea un valor entero y determina si es par o impar.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int number;
  
  cout<<"Ingrese un numero: "<<endl;
  cin>>number;
  
  if(number == 0){
     cout<<"El numero es cero";  
  }else if(number % 2 == 0){
     cout<<"El numero es par";  
  }else{
     cout<<"El numero es impar";  
  }
  
  return 0;  
}
