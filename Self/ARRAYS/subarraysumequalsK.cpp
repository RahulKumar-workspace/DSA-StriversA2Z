#include<bits/stdc++.h>
using namespace std;

//Tc=O(n^2)
int subarraysumequalsK(vector<int>&arr, int k){
    int n = arr.size();
    int count=0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            if(sum==k) count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    vector<int> nums(arr, arr + n);

    cout<<subarraysumequalsK(nums, k)<<endl;
    
    return 0;
}

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

//betterbrute(around O(N^2)):
    // int count=0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum+=arr[j];
    //         if(sum==k) count++; //inside the loop;
    //     }
    // }
    // cout<<count<<endl;