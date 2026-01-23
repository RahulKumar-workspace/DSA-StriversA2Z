#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums){
    int start=0;
    int end=nums.size()-1;
    if(nums.size() == 1) return nums[0];
    while(start<end){
        int mid = (start+end)/2;
        //make mid even
        if(mid%2==1){
            mid--;
        }
        if(nums[mid] == nums[mid+1]){
            // correct pair → single is on right
            start = mid + 2;
        }else
        // broken pair → single is at mid or left
            end = mid;
        }
    return nums[end];
}

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(3);
    v.push_back(7);
    v.push_back(7);
    v.push_back(10);
    v.push_back(11);
    v.push_back(11);    

    cout<<singleNonDuplicate(v)<<endl;
    return 0;
}