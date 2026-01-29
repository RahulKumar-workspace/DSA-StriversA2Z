#include<bits/stdc++.h>
using namespace std;

//brute: Tc=O(N^2), Sc=O(1)
int maxAreaBrute(vector<int>& arr){
    int n = arr.size();
    int maxArea = 0;

    for(int i=0; i<n; i++){
        int area = 0;
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int height = min(arr[j],arr[i]);
            area = width*height;
            maxArea = max(maxArea,area);
        }
    }
    return maxArea;
}

//Optimal: Time: O(n), Space: O(1)
int maxAreaOptimal(vector<int>& arr){
    int maxArea = 0;
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left<right){
        int width = right - left;
        int height = min(arr[left],arr[right]);

        maxArea = max(maxArea,width*height);

        if(arr[left] < arr[right]){
            left++;
        }else{
            right--;
        }
    }

    return maxArea;
}

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout<<"maxArea: "<<maxAreaBrute(arr)<<endl;
    cout<<"maxArea: "<<maxAreaOptimal(arr)<<endl;
    return 0;
}