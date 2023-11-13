/*EJERCICIO N*28

 Escribe un programa que tome cada cuatro horas la temperatura exterior, leyendola
 durante un periodo de 24 HORAS. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia,
 la temperatura mas alta y la mas baja.
*/

#include <iostream>
using namespace std;
int main(void){

  float temperatura, tMedia = 0, sumaT = 0;
  float tAlta = 0, tBaja = 9999;
  
  for(int i = 0; i < 24; i += 4){
    
    cout<<"Ingrese la temperatura a las : "<<i<<endl;
    cin>>temperatura;
    
    //Suma de las temperaturas ingresadas.
    
    sumaT += temperatura;
    
    //Temperatura alta.
    
    if(temperatura > tAlta){
      tAlta = temperatura;
    }
    
    //Temperatura baja.
    
    if(temperatura < tBaja){
      tBaja = temperatura;
    }
  }
  
  //Temperatura media.
  
  tMedia = sumaT/6;
  
  cout<<"La temperatura alta es: "<<tAlta<<endl;
  cout<<"La temperatura baja es: "<<tBaja<<endl;
  cout<<"La temperatura media es: "<<tMedia<<endl;
  
  
 return 0;
}
