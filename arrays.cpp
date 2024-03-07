#include <iostream>
using namespace std;
int main(){
    int mathMarks[4] = {22,33,44,55}; //Do not necessarily need to define the value of an array.
    int scienceMarks[4];  //Declaring the size of the array.
    scienceMarks [0] = 11;
    scienceMarks [1] = 12;
    scienceMarks [2] = 13;
    scienceMarks [3] = 14;
int englishMarks[4] = {99,88,77,66};
//Printing the array using for loop
cout<<"Printing using for loop"<<endl;
for (int i =0;i<4;i++)
{
    cout<<mathMarks[i]<<endl;
}
//printing the array using while loop
cout<<"Printing using while loop"<<endl;
int j=0;
while (j<4)
{
    cout<<scienceMarks[j]<<endl;
    j++;
}
//under do while loop, the loop will run at least once even if the condition is not matched.
cout<<"Printing using do while loop"<<endl;
int k =0;
do
{
   cout<<englishMarks[k]<<endl;
    k++;
} while (k<4);


    return 0;
}
