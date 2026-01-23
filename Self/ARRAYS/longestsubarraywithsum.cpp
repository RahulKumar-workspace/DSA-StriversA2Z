#include<bits/stdc++.h>
using namespace std;

//NOTE: This is the Optinal code if the array has both +ve as well as -ve no's.
int LongestSubarraywithsumK_partial(vector<int>& a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
        if(sum==k) maxLen = max(maxLen, i+1);

        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        } 
    }
    return maxLen;
}

//Optimal if the array contains only 0's and 1's
//Tc = O(2n)
//Sc = O(1)
int LongestSubarraywithsumK_2pointer(vector<int>& a, long long k){
    int left = 0, right = 0;
    long long sum = a[0];
    int MaxLen = 0;
    int n = a.size();

    while(right<n){
        while(sum > k && left<=right){
            sum -= a[left];
            left++;
        }
        if(sum==k) MaxLen = max(MaxLen, right-left+1);
        right++;
        if(right<n) sum+=a[right];
    }
    return MaxLen;
}

int main(){
    int arr[12] = {1,2,3,1,1,1,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long k = 4;

    vector<int> nums(arr, arr + n);

    cout<<LongestSubarraywithsumK_partial(nums,k)<<endl;
    cout<<LongestSubarraywithsumK_2pointer(nums,k)<<endl;
    return 0;
}

//brute(O(N^3))
    // int len = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             sum+=arr[k];
    //         }
    //         if(sum==r) len = max(len, j-i+1);
    //     }
    // }
    // cout<<len<<endl;

//brute(O(N^2))
    // int len = 0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum+=arr[j];
    //         if(sum==r) len = max(len, j-i+1);
    //     }
    // }
    // cout<<len<<endl;