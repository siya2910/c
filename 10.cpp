#include <iostream>
using namespace std;

int main(){
    //pointers.....data type which holds address of other variables//
    int a=3;
    int*b;
    b =&a;

    //&...:(address of)operator//
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of a is:"<<b<<endl;

     //*.....(value at)deference operator//
    cout<<"The value at address b is:"<<*b<<endl;

    //pointers to pointer//
    int** c=&b;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The address of b is:"<<c<<endl;
    cout<<"The  value at address  c is:"<<*c<<endl;
    cout<<"The  value at address value_at (value_at(c))is:"<<**c<<endl;

    return 0;
}