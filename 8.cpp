#include <iostream>

using namespace std; 
int main(){
/*loops in c++:
There are 3 types of loops in c++:
    1.For loop
    2.while loop
    3.Do-while loop
*/
//for loop in c++:
//int i=1;
//cout<<i;
//i++;
//syntax for loop:
//for (intialization;condition ;updation)
//{
 //   loop body (c++ code);
//}

for (int i=0 ;i<=40 ;i++)
{
    cout<<i<<endl;
}
//example of infinite for loop
//for (int i=0 ;34<=40 ;i++)
//{
 //   cout<<i<<endl;
//}

//while loop in c++://
//syntax:
//while(condition)
//{
    //c++ statements;
//}
//printing 1 to 40 using while loop
int i=1;
while (i<=40);{
cout<<i<<endl;
i++;
}

//example of infinite while loop
//int i=1;
//while(true){
//cout<<i<<endl;
//i++;
//}

// DO while loop in c++://
//syntax:
//do
//{
    //c++ statements;
//}while (conditions);

int i=1;
do{
cout<<i<<endl;
i++;
}while(i<=40);

     return 0;
}