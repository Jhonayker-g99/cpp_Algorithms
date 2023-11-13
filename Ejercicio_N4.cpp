/* EJERCICIO N*4
  
  Escribe la siguiente expresion.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float a, b, result = 0;
    
    cout<<"Digite un numero: "<<endl;
    cin>>a;
    cout<<"Digite otro numero: ";
    cin>>b;
    
    result = a/b+1;
    
    cout.precision(2);
    cout<<"\nEl resultado de la operacion es: "<<result;
    return 0;
}
