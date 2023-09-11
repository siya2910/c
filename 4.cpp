#include<iostream>

using namespace std;
int main (){
    int a=6 ,b=8;
    cout<<"operators in c++ :"<<endl;
    cout<<"following are the types of operator "<<endl; 
    //arithmetic operator/n
    cout<<"following are the arithnetic  operator "<<endl; 
    cout<<"The value of a+b is:"<<(a+b)<<endl;
    cout<<"The value of a-b is:"<<(a-b)<<endl;
    cout<<"The value of a*b is:"<<(a*b)<<endl;
    cout<<"The value of a/b is:"<<(a/b)<<endl;
    cout<<"The value of a%b is:"<<(a%b)<<endl;
    cout<<"The value of a++ is:"<<(a++)<<endl;
    cout<<"The value of a-- is:"<<(a--)<<endl;
    cout<<"The value of --a is:"<<(--a)<<endl;
    cout<<"The value of ++a is:"<<(++a)<<endl;
    cout<<endl;

    //Assignment operator--used to assign variables
    //a=3,b=9
    //char d='d';

    //comparison operator
    cout<<"Following are the comparison operator" <<endl;
    cout<<"The value of a==b is :"<<(a==b)<<endl;
    cout<<"The value of a!=b is :"<<(a!=b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    cout<<endl;

    //logical opeartors
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator is (a==b) && (a>b) :" <<((a==b) && (a>b))<<endl ;
    cout<<"The value of  this logical or operator is (a==b) or (a>b) :" <<((a==b) || (a>b))<<endl ;
    cout<<"The value of this logical not operator is (!(a==b)) :"<<(!(a==b))<<endl;
    
    return 0;
}

