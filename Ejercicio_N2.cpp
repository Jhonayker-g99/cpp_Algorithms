/*EJECICIO N*2

Escribe un programa que lea de la entrada estandar el precio de un producto y
muestre en la salida estandar el precio del producto al aplicarle el IVA.
*/

#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    float precio, iva, total;
    
    cout<<"Ingrese precio del producto: "; cin>>precio;
    cout<<"\nIngrese el porcentaje del iva: "; cin>>iva;
    
    iva = (precio * iva)/100;
    total = precio + iva;
    
    cout<<"\nIVA: "<<iva<<endl;
    cout<<"Precio total: "<<total;
    return 0;
}
