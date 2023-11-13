/*EJERCICIO N*9.

 Escribe un programa que lea la nota final de cuatro alumnos y
 calcule la nota final media de los cuatro alumnos.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float a, b, c, d, promedio = 0;
    
    cout<<"Ingrese nota del primer alumno: "<<endl;
    cin>>a;
    cout<<"Ingrese nota del primer alumno: "<<endl;
    cin>>b;
    cout<<"Ingrese nota del primer alumno: "<<endl;
    cin>>c;
    cout<<"Ingrese nota del primer alumno: "<<endl;
    cin>>d;
    
    promedio = (a+b+c+d)/4;
    
    cout<<"La nota final media de los cuatro alumnos es: "<<promedio;
    
    return 0;
}
