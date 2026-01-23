#include<iostream>
using namespace std;

void gcd(int n1, int n2);

//TC = O(min(n1,n2)) -> loop will run till min(n1,n2)
/*void gcd(int n1, int n2){
    int gcd = 1;
    for(int i=1; i<min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout<<"GCD: "<<gcd<<endl;
}*/

//TC = O(min(n1,n2)) -> loop will run till '1' if n1 and n2 are 11 and 13.
/*void gcd(int n1, int n2){
    int gcd = 1;
    for(int i=min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){
            gcd = i;
            break;
        }
    }
    cout<<"GCD: "<<gcd<<endl;
}*/


// EUCLIDEAN ALGORITHM:-

//. gcd(n1,n2) == gcd(n1-n2,n2) , given n1>n2;
//eg: gcd(20,15) == gcd(5,15)
//.   gcd(15,5) == gcd(10,15) 
//.   gcd(15,10) == gcd(5,10)
//.   gcd(10,5) == gcd(5,5) 
//.   gcd(5,5) = (0,5) -> One no becomes '0' so the other no is the GCD.

void gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a>0) cout<<"GCD = "<<a<<endl;
    else cout<<"GCD = "<<b<<endl;

    //TC = O(log(pi)(min(a,b)))
}

int main(){
    int n1,n2;
    cout<<"Enter no one: ";
    cin>>n1;
    cout<<"Enter no two: "; 
    cin>>n2;

    gcd(n1, n2);
    return 0;
}