//Dhairya Thakkar
//2470123037
//A2
//call by value
#include <iostream>
using namespace std;
void swap(int x, int y){
    int aa;
    aa=x;
    x=y;
    y=aa;
cout << "swapped value of a "<< x<<endl;
cout <<"swapped value of b "<<  y<< endl;
}
int main(){
 int a=3,b=5;
 swap(a,b);
 cout << a<<endl;
 cout<< b;
}
/* OUTPUT:
swapped value of a 5
swapped value of b 3
3
5
*/
