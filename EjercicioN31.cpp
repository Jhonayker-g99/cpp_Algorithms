/*EJERCICIO N*31

 Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/

#include <iostream>
using namespace std;
int main(void){
  
  int n, sum = 0;
  
  cout<<"Introduzca un numero: "<<endl;
  cin>>n;
  
  for(int i = 0; i <= n; i++){
    sum = 2*i-1;
  }
  
  cout<<"El total es: "<<sum;
  
  return 0;  
}
