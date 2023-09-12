#include <iostream>
using namespace std;

int c=25;

int main (){
    //...built in data types...
    int a ,b ,c ;
    cout<<"Enter the value of a:<<endl";
    cin>>a;
    cout<<"enter the value of b:<<endl";
    cin>>b;

    c=a+b;
    cout<<"the sum is; "<<c<<endl;
    cout<<"The global c is"<<::c;

    //.....float ,double and long double literals...
    float d=35.6f;
    long double e=35.6l;
    cout<<"The size of 35.6f is:"<<sizeof(35.6f)<<endl;
    cout<<"The size of 35.6F is:"<<sizeof(35.6F)<<endl;
    cout<<"The size of 35.6L is:"<<sizeof(35.6L)<<endl;
    cout<<"The size of 35.6l is:"<<sizeof(35.6l)<<endl;
    cout<<"The size of 35.6 is:"<<sizeof(35.6)<<endl;

    cout<<"The value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl; 

    //..reference variables in c++....
    //siya mandal--->>sia-->>tia-->>--sikli
    float x=355;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    //....TYPE CASTING...
    int a=45;
    float b=45.6;
    cout<<"The value of a is:"<<(float)a<<endl;
    cout<<"The value of a is:"<<float(a)<<endl;

    cout<<"The value of b is:"<<(float)b<<endl;
    cout<<"The value of b is:"<<float(b)<<endl; 
    int c=int (b);

    cout<<"The expression is:"<<a+b;
    cout<<"The expression is:"<<a+int(b);
    cout<<"The expression is:"<<a+(int)b;

    return 0;
}
