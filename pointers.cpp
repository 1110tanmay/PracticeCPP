#include <iostream>
using namespace std;
int main(){
    int a; //Normal variable
    int* b = &a; //Declaring a pointer variable
    // & = Address of the operator 
    // * = Dereference operator
    //Every variable is stored in the ram. We are calling the address the through the & and *.
    cout<<b; //Gives  output of the address of a.

    //to get the value  stored in b:
    int** c =&b;
    cout<<"The value stored in b"<<*c;
    return 0;
}
