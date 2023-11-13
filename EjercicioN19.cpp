/*EJERCICIO N*19

 Escriba un programa que lea de la entrada estandar un
 caracter e indique en la salida estandar si el caracter es una
 vocal minuscula, una vocal mayuscula o no es una vocal.
*/

#include <iostream>
using namespace std;
int main(void){
  
  char letra;
  
  cout<<"Ingrese una letra: "<<endl;
  cin>>letra;
  
  switch(letra){
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
       cout<<"La vocal es minuscula";
       break;
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
       cout<<"La vocal es mayuscula";
       break;
     default:
       cout<<"No es una vocal";
       break;
  }
  
  return 0;  
}
