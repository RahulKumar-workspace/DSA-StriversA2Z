#include<bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> nums = {2, 4, 6, 8, 10};  // example array
//     int n = nums.size();

//     vector<int> pre(n);   // prefix sum array

//     pre[0] = nums[0];

//     for(int i=1; i<n; i++) {
//         pre[i] = pre[i-1] + nums[i];
//     }

//     // sum of first 4 elements = prefix[3]
//     cout <<"Sum of first 4 numbers = "<< pre[4] << endl;

//     return 0;
// }

int main(){
    vector<int> nums = {2,4,6,8,10};
    int n = nums.size();

    vector<int> pre(n);

    pre[0] = nums[0];

    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]+nums[i];
    }

    cout<<pre[4]<<endl;
    return 0;
}