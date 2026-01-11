#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);


    // vector<int>::iterator it1 = v.begin();
    // cout<<*(it1)<<endl;
    // it1 = it1+2;
    // cout<<*(it1)<<endl;

    // vector<int>::iterator it2 = v.end();
    // cout<<*(it2)<<endl;
    // it2--;
    // cout<<*(it2)<<endl;

    // cout<<v.back()<<endl;

    // vector<int>::reverse_iterator it3 = v.rend();
    // cout<<*(it3)<<endl;
    // it3--;
    // cout<<*(it3)<<endl;

    // vector<int>::reverse_iterator it3 = v.rbegin();
    // cout<<*(it3)<<endl;
    // it3++;
    // cout<<*(it3)<<endl;

    // cout<<v[0]<< " = "<<v.at(0)<<endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<", ";
    }cout<<endl;

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<", ";
    }cout<<endl;

    for(auto it : v){
        cout<< it <<", ";
    }cout<<endl;
    return 0;
}