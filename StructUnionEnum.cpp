#include <iostream>
using namespace std;

//Building a structure combining multiple data types:
typedef struct employee  //typedef helps in naming convention. 
{
   int compId;
   string empName;
   float salary;
} ep;

//Building another struct

typedef struct library
{
    int bookNumber;
    string bookName;
    int librarynumber;
}lb;

//union, only one of all the variables get memory assigned at a time. Is usually used for memory optimization. Since every variable has
// a memory assigned in ram, to optimize this we use union for the program to run faster. Using memory sharing.

union carModel{
    int carNumber;
    string carName;
};

//Enumeration: This is used to set/give a certain fixed values. Use GPT for a better explanation. 

enum weekdays{
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday
};

//Main function below

int main(){
    //Using a structure to input values of an employee.
    ep tanmay;
    ep vanshika;
    ep nikhil;
    tanmay.salary = 120000; 
    tanmay.empName = "Tanmay";
    tanmay.compId = 1234;
    nikhil.salary=214324;
    cout<<"The name of the employee is:"<<tanmay.empName<<endl;
    cout<<"The Salary of the employee is:"<<tanmay.salary<<endl;
    cout<<"The ID  of the employee is:"<<tanmay.compId<<endl;
    lb firstLibrary;
    lb secondLibrary;
    lb thirdLibrary;
    firstLibrary.bookName = "Da vinci code";
    cout<<"The name of the book is:"<<firstLibrary.bookName<<endl;
    //using union to display data, need to show one data at a time.
    union carModel BMW;
    BMW.carName = "BMW";
    cout<<BMW.carName<<endl;
   weekdays day1 =  Monday;
   cout<<day1;
    return 0;
}
