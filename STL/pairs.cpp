#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p1 = {1 ,3};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int, int>> p2 = {2, {3, 4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[] = {{5,6}, {7,8}, {9,10}};
    cout<<arr[1].first<<" "<<arr[2].second<<endl;
    return 0;
}