#include<iostream>
using namespace std;


// // SWAP 2 NO's using only 2 variables:-
// // Soln? -> use XOR operator.
// int main(){
//     int a = 5;
//     int b = 10;
//     // a = a^b;
//     // b = a^b;
//     // a = a^b;

//     a^=b;
//     b^=a;
//     a^=b;

//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// }



//Check if i'th bit is set(1) or not(Without converting a no into binary.).
//Soln? -> use Shift operators
int main(){
    int N = 13;
    int i = 2;

    // if((N&(1<<i))!=0){
    //     cout<<"Set"<<endl;
    // }else{
    //     cout <<"Not Set"<<endl;
    // }

    if(((N>>i)&1) == 0){
        cout<<"Not Set"<<endl;
    }else{
        cout<<"Set"<<endl;
    }
    return 0;
}