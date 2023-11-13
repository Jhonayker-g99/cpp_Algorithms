/*EJERCICIO N*24
  
  Realizar un menu que considere las siguientes opciones: 
  
  caso 1: cubo de un numero.
  caso 2: numero par o impar.
  salir.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(void){
  
  int number, x, opc;
  
  cout<<"1. Cubo de un numero"<<endl;
  cout<<"2. Numero par o impar"<<endl;
  cout<<"3. Salir"<<endl;
  cin>>opc;
  
  switch(opc){
    case 1:
      //Elevacion al cubo.
      cout<<"Ingrese un digito: "<<endl;
      cin>>number;
      
      x = pow(number,3);
      
      cout<<"El cubo de "<<number<<" es "<<x<<endl;
      break;
      
    case 2:
      //Numero par o impa.
      cout<<"Ingrese un digito: "<<endl;
      cin>>number;
      
      if(number % 2 == 0){
        cout<<"El valor "<<number<<" es un numero par"<<endl;
      }else{
        cout<<"El valor "<<number<<" es un numero impar"<<endl;
      }
      break;
    
    case 3:
      //Salida.
      cout<<"Sesion finalizada";
  }
  
  return 0;
}
