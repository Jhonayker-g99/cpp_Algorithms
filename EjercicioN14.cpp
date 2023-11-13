/*EJERCICIO N*14

 Escribe un programa que lea dos numeros y determine cual de ellos es el mayor.
*/

#include <iostream>
using namespace std;
int main(void){
   
   int n1, n2;
   
   cout<<"Ingrese dos valores: "<<endl;
   cin>>n1>>n2;
   
   if(n1==n2){
     cout<<"Ambos numeros son iguales";
   }else if(n1>n2){
     cout<<"El numero mayor es "<<n1;   
   }else{
     cout<<"El numero mayor es "<<n2;
   }
   
   return 0; 
}
