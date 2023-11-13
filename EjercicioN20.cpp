/*EJERCICIO N*20

 Escriba un programa que solicita una edad e indique en la salida estandar si la
 edad introducida esta en el rango [18-25]
*/

#include <iostream>
using namespace std;
int main(void){
  
  int edad;
  
  cout<< "Ingresa tu edad: "<<endl;
  cin>>edad;
  
  if(edad>=18 && edad<=25){
    cout<<"Su edad esta dentro del rango";
  }else{
    cout<<"Su edad no esta dentro del rango";  
  }
  
  return 0;  
}
