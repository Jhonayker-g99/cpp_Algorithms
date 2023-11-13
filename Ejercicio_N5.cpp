/*EJERCICIO N*5
  
  Expresion matematica 2.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float a, b, c, d, result = 0;
    
    cout<<"Digite cuatro digitos: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    result = (a+b)/(c+d);
    
    cout.precision(2);
    
    cout<<"El resultado de la operacion es: "<<result;
    
    return 0;
    
}
