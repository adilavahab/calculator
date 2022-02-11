#include <iostream>
using namespace std;

int main() {
    int Operator; 
    int num1, num2;
    
    cout<<"please select your operation to be implemented \n Enter:\n 1 for addition \n 2 for subtraction\n 3 for multiplication \n 4 for division:";
    cin>>Operator;
    cout<<"\nEnter two numbers to implement this operation";
    cin>>num1>>num2;
    switch (Operator)  {
       case 1:  
          cout<<"You have selected Addition Operation\n";
          cout<<"Result is:"<<num1+num2;
          break;
       case 2:
          cout<<"You have selected Subtraction Operation\n";
          cout<<"Result is:"<<num1-num2;
          break;
       case 3:
          cout<<"You have selected Multiplication Operation\n";
          cout<<"Result is:"<<num1*num2;
          break;
       case 4:
          cout<<"You have selected Division Operation\n";
          cout<<"Result is:"<<num1/num2;
          break;
          
          
          default :
          cout<<"Invalid Operator";
          break;}
        return 0;
        }
          
          
          
          
          
