#include <iostream>
using namespace std;
//int num1, num2;

//normal increment function, call by value
void increment(int x){
x++;
//return x;
}

//increment function by using the reference of the actual parameter. 
int incrementPointer(int &x){
    x++;
    return x;
}

//Main function
int main(){
    int num1 = 2;
    int num2 = 4;
    cout<<"Before increment"<<num1<<endl;
    cout<<"After increment by call by value:"<<increment(num1)<<endl; //The value of num1 did not change, it only changed within the funciton. 
    cout<<num1<<endl;
    cout<<"After increment by call by refernce:"<<incrementPointer(num1)<<endl;
    return 0;
}
