/*EJERCICIO N*27.

 Realice un programa que calcule y muestre en la salida estandar la suma de los
 cuadrados de los 10 primeros enteros mayores a cero.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int cuadrados, sum = 0;
  
  for(int i = 0; i <= 10; i++){
    cuadrados = i * i;
    sum += cuadrados;
  }
  
  cout<<"El resultado es: "<<sum;
  
  return 0;
}
