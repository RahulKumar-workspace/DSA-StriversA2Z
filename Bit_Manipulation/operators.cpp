#include<iostream>
using namespace std;

/* Q1: SWAP 2 NO's using only 2 variables:-
Soln? -> use XOR operator. */
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



/* Q2: Check if i'th bit is set(1) or not(Without converting a no into binary.).
Soln? -> use Shift operators. */
// int main(){
//     int N = 13;
//     int i = 2;

//     // if((N&(1<<i))!=0){
//     //     cout<<"Set"<<endl;
//     // }else{
//     //     cout <<"Not Set"<<endl;
//     // }

//     if(((N>>i)&1) == 0){
//         cout<<"Not Set"<<endl;
//     }else{
//         cout<<"Set"<<endl;
//     }
//     return 0;
// }


/* Q3: Set the i'th bit.
Way -> put '1' underneath the ith bit then do OR operation. */
// int main(){
//     int N = 9;
//     int i = 2;

//     N = (N | (1 << i));
//     cout<<N<<endl;

//     return 0;
// }

/* Q4: Clear the i'th bit.
Way -> Put '1' underneath the i'th bit. 
Do NOT operation on that part to make the bit underneath the i'th bit as 0 rest all as 1's. 
Now do & operation. */
// int main(){
//     int N = 13;
//     int i = 1;

//     N = (N & ~(1<<i));

//     cout<<N<<endl;
//     return 0;
// }

/* Q5: Toggle the i'th bit.
Way -> put '1' undereath the i'th bit then do XOR operaion.*/
int main(){
    int N = 13;
    int i = 1;

    N = (N ^ (1<<i));

    cout<<N<<endl;
    return 0;
}