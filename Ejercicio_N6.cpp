/*EJERCICIO N*6

 Expresion matematica 3.
*/

#include <iostream>
using namespace std;
int main(void){
    
    float a, b, c, d, e, f, result = 0;
    
    cout<<"Digite el valor de a: "<<endl;
    cin>>a;
    cout<<"Digite el valor de b: "<<endl;
    cin>>b;
    cout<<"Digite el valor de c: "<<endl;
    cin>>c;
    cout<<"Digite el valor de d: "<<endl;
    cin>>d;
    cout<<"Digite el valor de e: "<<endl;
    cin>>e;
    cout<<"Digite el valor de f: "<<endl;
    cin>>f;
    
    result = (a+b/c)/(d+e/f);
    
    cout<<"El resultado de la operacion es: "<<result;
    
    return 0;
}
