/*EJERCICIO N*13.

 Escriba un programa que calcule las soluciones de una ecuacion de segundo grado
 de la forma ax^2 + bx + c = 0.

*/

#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    
  float a, b, c, x1 = 0, x2 = 0;
  
  cout<<"Ingrese el valor de a: "<<endl;
  cin>>a;
  cout<<"Ingrese el valor de b: "<<endl;
  cin>>b;
  cout<<"Ingrese el valor de c: "<<endl;
  cin>>c;
  
  x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
  x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
  
  cout<<"El valor de x1 es: "<<x1<<endl;
  cout<<"El valor de x2: es "<<x2;
  
  return 0;
    
}
