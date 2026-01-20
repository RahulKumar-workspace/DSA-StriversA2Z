#include<bits/stdc++.h>
using namespace std;

// Jan 20th 

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(16);

    int result = 0;

    for(auto it : v){
        if(it % 2 == 0){
            result = result | it;
        }
        it++;
    }
    cout<<result<<endl;

    return 0;
}