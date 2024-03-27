#include <iostream>
using namespace std;

//Declaring global variables to use further in the program
int num1, num2;
//Addtion function : Define a function, it takes arguments in the paranthesis

int sum(int a, int b){ //a and b are arguments, also they are local variables
int c =  a+b; 
return c; // Returning a value  
}

int mul(int a, int b);  //Function prototyping. To give the compiler an assurity. Also a and b are not needed, simply the data type can do the job.
int div(int, int); // Only defined the datatype
//The above parameters are formal parameters.
void greet(void); //Prototyping a void function
//Main Function
int main(){
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"The sum is:"<<sum(num1,num2)<<endl;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"The Mul is:"<<mul(num1,num2)<<endl; //num1 and num2 are actual parameters. 
    greet();
    return 0;
}

/*This syntax would simply give errors, since this is below the main function. Hence, function prototyping is needed here */
int mul(int a, int b){
    int c = a*b;
    return c;
}

void greet(){ //No parameters needed here/.
    cout<<"Hello, Good Morning!"
}
