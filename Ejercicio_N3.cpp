/*EJERCICIO N*3
 
  Escriba un programa que lea de la entrada estandar los siguientes
  datos de un persona:
  
    -Edad: dato tipo entero.
    -Sexo: dato tipo caracter.
    -Altura: dato de tipo float

  Tras leer los datos, el programa debe mostrarlos en la salida estandar.
*/

#include <iostream>
using namespace std;
int main(void){
    
    int edad;
    char sexo[10];
    float altura;
    
    cout<<"Ingrese edad: "<<endl;
    cin>>edad;
    cout<<"Ingrese sexo: "<<endl;
    cin>>sexo;
    cout<<"Ingrese altura: "<<endl;
    cin>>altura;
    
    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;
    
    return 0;
}
