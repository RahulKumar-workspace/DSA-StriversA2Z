#include<bits/stdc++.h>
using namespace std;

// If only uppercase of lowercase char are there ('a' <--> 'A')
// int main(){
//     string s;
//     cin>>s;
//     //precompute
//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         //fetch;
//         cout<<hash[c-'a']<<endl;
//     }
//     return 0;
// }

//If any kinds of char are there:
int main(){
    string s;
    cin>>s;
    //precompute
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch;
        cout<<hash[c]<<endl;
    }
    return 0;
}