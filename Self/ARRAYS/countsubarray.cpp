#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int r = 7;

//brute force(around O(N^3)):
    // int count = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){ //(from i to j)
    //             sum = sum+arr[k];
    //         }
    //         if(sum==r) count++;
    //     }
    // }
    // cout<<count<<endl;

//better(around O(N^3)):
    // int count=0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum+=arr[j];
    //         if(sum==r) count++; //inside the loop;
    //     }
    // }
    // cout<<count<<endl;

    
    return 0;
}