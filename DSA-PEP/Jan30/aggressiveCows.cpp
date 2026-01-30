// https://www.geeksforgeeks.org/problems/aggressive-cows/1
#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int>& arr,int distance,int cows){
    int countCows = 1;
    int last = arr[0];
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]-last >= distance){
            countCows++;
            last = arr[i];
        }
    }
    if(countCows >= cows) return true;
    else return false;
}

// // BRUTE: TLE in GfG
// // Tc = nlogn + O(min-max)*O(n), Sc = O(1);
// int aggressiveCowsBrute(vector<int> &arr, int cows) {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     int minDistance = 1;
//     int maxDistance = arr[n-1]-arr[0];
//     int ans = 0;
        
//     for(int i=minDistance; i<=maxDistance; i++){
//         if(canWePlace(arr,i,cows) == true){
//             ans = i;
//         }else{
//             break;
//         }
//     }
//     return ans;
// }

// Tc = nlogn + O(logbase2N) * O(n)
int aggressiveCowsOptimal(vector<int>& arr, int cows){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int low = 0;
    int high = arr[n-1] - arr[0];
    int ans = 0;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(canWePlace(arr,mid,cows) == true){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 4, 8, 9};
    vector<int> arr2 = {10, 1, 2, 7, 5};
    vector<int> arr3 = {2, 12, 11, 3, 26, 7};
    int k1 = 3;
    int k2 = 5;

    // cout<<aggressiveCowsBrute(arr1, k1)<<endl;
    // cout<<aggressiveCowsBrute(arr2, k1)<<endl;
    // cout<<aggressiveCowsBrute(arr3, k2)<<endl;

    cout<<aggressiveCowsOptimal(arr1, k1)<<endl;
    cout<<aggressiveCowsOptimal(arr2, k1)<<endl;
    cout<<aggressiveCowsOptimal(arr3, k2)<<endl;

    return 0;
}