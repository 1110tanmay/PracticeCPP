#include <iostream>
using namespace std;

int num1, num2;  //Global variable

void sum(){  //sum function
int sum = num1 + num2;
cout<<"The sum is:"<<sum;
} 
void sub(){ //Sub function
    int sub = num1-num2;
    cout<<"The result is:"<<sub;
}
void mul(){  //mul function
    int mul =num1*num2;
    cout<<"The result is:"<<mul;
}
void div(){  //div function
    int div = num1/num2;
    cout<<"The result is:"<<div;
}
int main(){ //Main function
    int choice;
    cout<<"Welcome to calculator, select the operation!:"<<endl<<"1.Addtion"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division\n";
    cin>>choice;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
     cout<<"Enter second number:"<<endl;
    cin>>num2;
    switch (choice)
    {
    case 1:
        sum();
        break;
        case 2:
        sub();
        break;
        case 3:
        mul();
        break;
        case 4:
        div();
        break;
    }
    return 0;
}
