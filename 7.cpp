#include <iostream>
using namespace std;

int main(){
cout<<"implementation of c++ control structures"<<endl;
//it is implementation of selection control structure...if else ,if,else ladder
int age;
cout<<"tell me ur age"<<endl;
cin>>age;
if ((age<18) && (age>0)){
    cout<<"you can not come to the party"<<endl;
}
else if(age==18){
    cout<<"you are a kid then you get a kid pass for the party"<<endl;
}
else if (age<1){
    cout<<"you are not yet born"<<endl;
}
else{
    cout<<"you can come to the party"<<endl;
}

//selection control structures:switch case
switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;

default:
cout<<"No special cases"<<endl;
    break;
}
cout<<"Done with switch case"<<endl;
    return 0;
}