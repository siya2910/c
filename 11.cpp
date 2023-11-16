#include <iostream>
using namespace std;

int main(){
    //arrays
    int marks [5]={45,67,66,87,99};

    marks[4]=88;//you can change the value of an array//
    cout<<"This is the marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    int mathmarks [4]={76,87,99,56};

    cout<<"This is the maths marks"<<endl;
    //cout<<mathmarks[0]<<endl;
    //cout<<mathmarks[1]<<endl;
    //cout<<mathmarks[2]<<endl;
    //cout<<mathmarks[3]<<endl;


    //using for loop in array
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of maths marks is :"<<i<<"is"<<mathmarks[i]<<endl;
    }

    //using while loop in array
    int i=1;
    while (i<4);
    {
       cout<<i<<endl;
       i++; 
    }

    //using do while loop in array
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<4);
    
    
    
    


    return 0;
}