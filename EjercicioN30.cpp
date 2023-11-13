/*EJERCICIO N*30.

 Escriba un programa que calcule el valor de: 1+2+3+...n
*/

#include <iostream>
using namespace std;
int main(void){
  
  int number, sum = 0;
  
  cout<<"Introduzca un digito: "<<endl;
  cin>>number;
  
  for(int i = 0; i <= number; i++){
    sum += i;
  }
  
  cout<<"La suma es: "<<sum;
  return 0;  
}
