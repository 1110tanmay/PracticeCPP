#include <iostream>
using namespace std;
int main(){
    //Break
    // for (int i = 0; i<=5; i++)
    // {
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i<=5; i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
