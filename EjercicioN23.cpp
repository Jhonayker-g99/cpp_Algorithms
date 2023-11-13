/*EJERCICIO N*23

  Realizar un programa que simule un cajero automatico con un saldo inicial de
  mil dolares.
*/

#include <iostream>
using namespace std;
int main(void){

  int saldoIni = 1000, opc;
  float deposito, retiro, saldoDis = 0;
  
  cout<<"Bienvenido a su cajero automatico."<<endl;
  cout<<"1. Depositar dinero."<<endl;
  cout<<"2. Retirar dinero."<<endl;
  cout<<"Marque una opcion: "<<endl;
  cin>>opc;
  
  switch(opc){
    case 1:
      cout<<"Ingrese la cantidad a depositar "<<endl;
      cin>>deposito;
      
      saldoDis = saldoIni + deposito;
      
      cout<<"Su saldo total es de "<<saldoDis;
      break;
    case 2:
      cout<<"Ingrese la cantidad a retirar "<<endl;
      cin>>retiro;
      
      if(retiro < saldoIni){
        saldoDis = saldoIni - retiro;
        cout<<"Su saldo total es de "<<saldoDis;
      }else{
        cout<<"Fondo insuficiente.";
      }
      break;
    case 3:
      cout<<"Gracias. Vuelva pronto."<<endl;
  }
    
  return 0;  
}
