#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(16);

    int abc = 0;

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<", ";
    // }cout<<endl;

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<", ";
    // }cout<<endl;

    // for(auto it : v){
    //     cout<< it <<", ";
    // }cout<<endl;
    
    vector<int>::iterator it1 = v.begin();
    // cout<<*(it1)<<endl;
    // it1++;
    // cout<<*(it1)<<endl;

    for(auto it : v){
        if(*(it1) % 2 == 0){
            abc = abc | *(it1);
        }
        it1++;
    
    cout<<abc;
    
    return 0;
}