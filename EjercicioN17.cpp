/*EJERCICIO N*17
 
 Comprobar si un numero es positivo o negativo.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int numero;
  
  cout<<"Ingrese un numero: "<<endl;
  cin>>numero;
  
  if(numero == 0){
    cout<<"El numero es cero";       
  }else if(numero > 0){
     cout<<"El numero es positivo";  
  }else{
     cout<<"El numero es negativo";  
  }
  
  return 0;
}
