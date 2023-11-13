/*EJERCICIO N*35

 Hacer un programa que calcule el resultado de la siguiente expresion: 
 1-2+3-4+5-6...n
*/

#include <iostream>
using namespace std;
int main(void){

 int num, suma = 0, par = 0, impar = 0;
 
 cout<<"Ingresa un numero: "<<endl;
 cin>>num;
 
 for(int i = 1; i <= num; i++){
   
   if(i % 2 == 0){
    par = i * -1;
   }else{
      impar += i;
   }
   
   suma = par + impar;
 }
 
 cout<<"El resultado es: "<<suma;
 
 return 0;
}
