/*EJERCICIO N*10

 La calificacion final de un estudiante es la media pomderada de tres notas
 la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta
 un 60% y la nota de participacion que cuenta el 10% restante. Escriba un programa
 que lea de la entrada estandar las tres notas de un alumno y escriba en la salida
 estandar su nota final.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float practica, teorica, participacion, notaFinal = 0;
    
    cout<<"Ingrese la nota de practica: "<<endl;
    cin>>practica;
    cout<<"Ingrese la nota teorica: "<<endl;
    cin>>teorica;
    cout<<"Ingrese la nota de participacion: "<<endl;
    cin>>participacion;
    
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;
    
    notaFinal = practica + teorica + participacion;
    
    cout<<"La nota final del alumno es: "<<notaFinal;
    
    return 0;
}
