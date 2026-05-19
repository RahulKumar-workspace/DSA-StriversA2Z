#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>arr){
    int max = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int requiredTime(vector<int>& arr, int hourly){
    int totalHrs = 0;
    for(int i=0; i<arr.size(); i++){
        totalHrs += ceil((double)arr[i]/hourly);
    }
    return totalHrs;
}

class Solution_Brute{
public:
    int minEatingSpeed(vector<int>& arr, int h){
        int maxArr = findMax(arr);

        for(int i=1; i<=maxArr; i++){
            int time = requiredTime(arr,i);
            if(time<=h) return i;
        }
        return -1;
    }
};
/*Current code: O(maxPile × n)
(n = number of piles, maxPile = maximum bananas in a pile)

Optimal approach (Binary Search): O(n × log maxPile)*/

class Solution_Optimal{
public:
    int minEatingSpeed(vector<int>& arr, int h){
        int low = 1;
        int high = findMax(arr);
        int ans = INT_MAX;

        while(low<=high){
            int mid = (high+low)/2;
            int totalHrs = requiredTime(arr,mid);

            if(totalHrs<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
/*O(n × log₂(maxPile))
log₂(maxPile) → binary search on eating speed
n → computing required hours for each mid value*/

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    Solution_Brute obj;                     // object of Solution class
    int result1 = obj.minEatingSpeed(piles, h);  // calling the function
    cout << result1 << endl;            // output result


    Solution_Optimal objj;                    
    int result2 = objj.minEatingSpeed(piles, h);
    cout << result2 << endl;
    return 0;
}
