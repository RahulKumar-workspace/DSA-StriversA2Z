#include<bits/stdc++.h>
using namespace std;

bool validPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}


int main(){
    string s;
    cin>>s;

    int i=0;
    int j = s.size()-1;

    while(i<=j){
        if(s[i] == s[j]){
            return validPalindrome(s,i+1, j) || validPalindrome(s,i,j-1);
        }
        i++;
        j--;
    }

    // cout<<validPalindrome(s);
    return 0;
}