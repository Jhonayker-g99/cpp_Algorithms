/*EJERCICIO N*1

Escribe un programa que lea de la entrada estandar dos numeros y
muestre en la salida estandar su suma, resta, multiplicacion y division. 
*/

#include <iostream>
using namespace std;
int main(void){
    
    int n1, n2;
    int suma = 0, resta = 0, multiplicacion = 0, division = 0;
    
    cout<<"Ingresa un digito: "; 
    cin>>n1;
    cout<<"\nIngresa otro digito: ";
    cin>>n2;
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;
    
    return 0;
    
}
