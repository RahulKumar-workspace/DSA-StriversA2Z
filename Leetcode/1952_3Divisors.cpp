#include<iostream>
#include<cmath>
using namespace std;

bool isThree(int n);

//Tc = O(n)
/*bool isThree(int n){
    int count=0;

    for(int i=1; i<=n; i++){
        if(n%i==0) count++;
    }

    if(count==3) return true;
    else return false;
} */

// Tc = O(n/2)
bool isThree(int n){
    //find square root;
    int root = sqrt(n);

    //check if n is perfect square;
    if(root*root!=n)return false;

    //check if root is prime
    if(root<2) return false;
    for(int i=2; i*i<=root; i++){
        if(root%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    cout<<isThree(n)<<endl;
    return 0;
}