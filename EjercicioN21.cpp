/*EJERCICIO N*21
 
 Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer 
 un cuarto numero e indicar si el numero coincide con algunos de los introducidos
 con anterioridad.
*/

#include <iostream>
using namespace std;
int main(void){

  int num1, num2, num3, num4;
  
  cout<<"Ingrese tres digitos: "<<endl;
  cin>>num1>>num2>>num3;
  
  cout<<"Ingrese otro digito: "<<endl;
  cin>>num4;
  
  if(num1==num4||num2==num4||num3==num4){
    cout<<"Coincide con una de las cantidades.";
  }else{
    cout<<"No coincide con ninguna de las cantidades.";
  }
  
  return 0;  
}
