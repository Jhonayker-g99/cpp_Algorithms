/*EJERCICIO N*12

  Expresion matematica 4.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(void){
 
 float x, y, result = 0;
 
 cout<<"Ingrese el valor de x: "<<endl;
 cin>>x;
 cout<<"Ingrese el valor de y: "<<endl;
 cin>>y;
 
 result = (sqrt(x))/(pow(y, 2)-1);
 
 cout<<"El resultado de la operacion es: "<<result;
    
 return 0;   
    
}
