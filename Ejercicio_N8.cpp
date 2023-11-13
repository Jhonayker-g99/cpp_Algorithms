/*EJERCICIO N*8
 
 Itercambio de variables
*/

#include <iostream>
using namespace std;
int main(void){
    
    int a, b;
    
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"El nuevo valor de a es: "<<a<<endl;
    cout<<"El nuevo valor de b es: "<<b;
    
    return 0;
}
