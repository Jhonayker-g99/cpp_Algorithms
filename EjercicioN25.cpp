/*EJERCICIO N*25

 Realice un programa que solicite de la entrada estandar un entero del uno al diez
 y muestre en la salida estandar su tabla de multiplicar.
*/ 

#include <iostream>
using namespace std;
int main(void){
  
  int number;
  
  do{
    cout<<"Ingrese un numero: "<<endl;
    cin>>number;
  }while(number<1 || number>10); //<= El bucle se va a detener cuando se introduzca un numero menor a 1 o mayor a 10. 
    
    for(int i = 1; i <= 10; i++){
      cout<<number<<" * "<<i<<" = "<<number*i<<endl;    
    }
    
  return 0;
}
