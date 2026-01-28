#include<bits/stdc++.h>
using namespace std;

// int maxSum(vector<int>& arr, int k){

// }

int main(){
    vector<int> arr = {7,10,4,6,3,5,6,2};
    int k = 3;
    int n = arr.size();

    int l = 0;
    int r = k;
    int sum = 0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }

    int maxSum = sum;
    while(r < n-1){
        sum = sum - arr[l];
        l++;
        sum = sum + arr[r];
        r++;

        maxSum = max(maxSum, sum);
    }

    cout<<"maxSum: "<<maxSum<<endl;
    return 0;
}