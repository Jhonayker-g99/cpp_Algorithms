/*EJERCICIO N*32

 Escriba un programa que calcule el valor de n!.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int number, producto = 1;
  
  cout<<"Introduzca un digito: "<<endl;
  cin>>number;
  
  for(int i = 2; i <= number; i++){
    producto *=i;
  }
  
  cout<<"El factorial es: "<<producto;
  return 0;  
}
