/*EJERCICIO N*34

 Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n.
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int main(void){

  int num, sum = 0, elev = 0;
  
  cout<<"Ingrese un digito: "<<endl;
  cin>>num;
  
  for(int i = 1; i <= num; i++){
    elev = pow(2, i);
    sum += elev;
  }
 
 cout<<"El total es: "<<sum;
 system("pausa");
 
 return 0;   
}
