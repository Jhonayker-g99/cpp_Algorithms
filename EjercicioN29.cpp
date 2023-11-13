/*EJERCICIO N*29.

Escriba un programa que lea valores enteros hasta que se introduzca un valor en el
rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los
valores mayores a 0 introducidos.
*/

#include <iostream>
using namespace std;
int main(void){

  int number, sum = 0;
  
  do{
    cout<<"Introduzca un valor: "<<endl;
    cin>>number;
    
    if(number < 0){
      sum += number;
    }
    
  }while(number < 20 || number > 30 && number != 0);
  
  cout<<"La suma de los numeros introducidos es: "<<sum;
  
  return 0;  
}
