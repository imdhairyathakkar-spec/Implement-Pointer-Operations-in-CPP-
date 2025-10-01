//Dhairya Thakkar
//2470123037
//A2
//call by reference with increment
#include <iostream>
using namespace std;
void swap(int &x ){
    int aa = 45;
  x=x+aa;
 
 
cout << "value incremented in function  "<< x<<endl;
}
int main(){
 int a=3;
 cout << "original value  "<< a <<endl;
 swap(a);
}
/* OUTPUT:
original value  3
value incremented in function  48

*/
