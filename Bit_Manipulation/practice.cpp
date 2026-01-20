#include<bits/stdc++.h>
using namespace std;

string convert2binary(int n){
    string res = "";
    while(n>0){
        if(n%2 == 1) res+="1";
        else res+="0";
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int convert2decimal(string x){
    int len = x.length();
    int num = 0;
    int power2 = 1;
    for(int i=len-1; i>=0; i--){
        if(x[i] == '1') num+=power2;
        power2*=2;
    }
    return num;
}

int reverse(int n, int bits){
    string res = "";
    for(int i=0; i<4; i++){
        if(n%2==1) res+="1";
        else res+="0";
        n=n/2;
    }

    int len = res.length();
    int num=0;
    int power2 = 1;
    for(int i=len-1; i>=0; i--){
        if(res[i] == '1') num+=power2;
        power2*=2;
    }
    return num;
}

int main(){
    int n = 13;
    // cout<<convert2binary(n)<<endl;

    string x = "1101";
    // cout<<convert2decimal(x)<<endl;

    cout<<reverse(n, 4)<<endl;
    return 0;
}