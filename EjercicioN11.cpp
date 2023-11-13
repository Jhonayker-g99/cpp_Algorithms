/*EJERCICIO N*11

 Escriba un programa que lea de la entrada estandar los dos catetos de un
 triangulo rectangulo y escriba en la salida estandar su hipotenusa.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    
    float a, b, hipotenusa = 0;
    
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    cout.precision(4);

    cout<<"El valor de la hipotenusa es: "<<hipotenusa;
    
    return 0;
    
}
