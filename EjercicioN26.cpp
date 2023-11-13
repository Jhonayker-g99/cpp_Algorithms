/*EJERCICIO N*26

 Realice un programa que lea de la entrada estandar numeros hasta que se introduzca
 un cero. En ese momento el programa debe terminar y mostrar en la salida estandar
 el numero de valores mayores que ceros leidos.
*/

#include <iostream>
using namespace std;
int main(void){
  
  int num, conteo = 0;
  
  do{
    cout<<"Introduzca un numero: "<<endl;
    cin>>num;
  
    if(num > 0){
      conteo++;
    }
  }while(num != 0);
	
  cout<<"Total de numeros mayores a cero: "<<conteo;
  
  return 0;
}
