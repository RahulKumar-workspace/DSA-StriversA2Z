#include<iostream>
using namespace std;

int gcdOfOddEvenSums(int n);
int gcdOfOddEvenSums(int n){
    int i=1;
    int count = 0;
    int sumodd = 0;
    int sumeven = 0;

    while(count<n){
        if(i%2==0){
            sumeven+=i;
            count++;
        }else{
            sumodd+=i;
        }
        i++;
    }

    int a = sumeven;
    int b = sumodd;

    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a>0) return a;
    else return b;
}


int main(){
    int n;
    cout<<"n: ";
    cin>>n;

    cout<<"GCD: "<<gcdOfOddEvenSums(n)<<endl;
    return 0;
}