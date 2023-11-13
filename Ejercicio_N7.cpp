/*EJERCICIO N*7

 Expresion matematica 4.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float a, b, c, d, result = 0;
    
    cout<<"Digite el valor de a: "<<endl;
    cin>>a;
    cout<<"Digite el valor de b: "<<endl;
    cin>>b;
    cout<<"Digite el valor de c: "<<endl;
    cin>>c;
    cout<<"Digite el valor de d: "<<endl;
    cin>>d;
    
    result = a+(b/(c-d));
    
    //cout.precision(3);
    cout<<"El resultado es: "<<result;
    
    return 0;
}
