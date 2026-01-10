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
// int main(){
//     int N = 13;
//     int i = 1;

//     N = (N ^ (1<<i));

//     cout<<N<<endl;
//     return 0;
// }

/* Q6: Remove the last set bit.*/
// int main(){
//     int N = 40;

//     N = (N&(N-1));
    
//     cout<<N<<endl;
//     return 0;
// }

/* Q7: Check if a no is power of 2 or not.
Note: A no is power of 2 if it only has a single set bit.
eg: 16->10000, 2->1000, etc*/
// int main(){
//     int N = 16;

//     N = (N&(N-1));

//     if(N == 0){
//         cout<<"N is power of 2"<<endl;
//     }else{
//         cout<<"N is not a power of 2"<<endl;
//     }
//     return 0;
// }

/* Q8: Count the no of set bits
(n%2==1) == (n&1) -> both check if the no is odd or not.
n/2 = (n>>1)
OR n=(n&(n-1))
check out notes to understand better!*/
// int main(){
//     int N = 13;
//     int no=N;
//     int count = 0;
// //Normal zindgi:
//     // while(N>0){
//     //     if(N%2==1) count+=1;
//     //     N=N/2; 
//     // }
// //Mentos zindgi:
//     // while(N>0){
//     //     if(N&1) count++;
//     //     N = (N >> 1);
//     // }
// //Mentos+ Zindgi:
//     while(N>0){
//         N = (N & (N-1));
//         count++;
//     }
//     cout<<"No of set bits are: "<<count<<endl;
//     return 0;
// }

/* Q9. Count Minimum no of bits to convert a no to other no (jan10)
way-> so only XOR operator works on opp bits, so do xor on the initial no and the intended no.
now yo'll nocice that only the bits which needs to flip are turning into '1'
so not count the no of bits from the result = count*/
int main(){
    int start = 10;
    int goal = 7;
    int ans = start ^ goal;
    int count = 0;
    // while(ans != 0){
    //     ans = ans & (ans-1);
    //     count++;
    // }
//or
    // for(int i=0; i<=31; i++){
    //     if(ans & (1<<i)){
    //         count++;
    //     }
    // }
//or
    while(start > 0 || goal > 0){
        if((start & 1) != (goal & 1)) count++;
        start >>= 1;
        goal >>= 1;
    }
    cout <<count<<endl;
    return 0;
}