/*EJERCICIO N*36

 Realice la serie de fibonacci
*/

#include <iostream>
//#include <stdlib.h>

using namespace std;
int main(void){

  int num, x = 0, y = 1, z = 1;
  
  cout<<"Ingrese un numero: "<<endl;
  cin>>num;
  
  for(int i = 0; i <= num; i++){
    z = x + y;
    cout<<z<<" ";
    x = y;
    y = z;
  }
  
  cout<<"\n";
  //system("pause");
  return 0;  
}
