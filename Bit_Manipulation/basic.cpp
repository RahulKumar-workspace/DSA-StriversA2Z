#include<iostream>
// #include<algorithm>
// #include<string>
using namespace std;

string convert2binary(int n);

//Tc = Log(base2)n, coz dividing by 2 each time. (n%2)
//Sc = Same as Tc coz, whatever no of steps i'm taking the no or remainder is same.
string convert2binary(int n){
    string res = "";
    while(n > 0){
        if(n%2 == 1) res += "1";
        else res += "0";
        n=n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int n = 56;
    // cout<<"Enter no: ";
    // cin>>n;

    cout<<n<<" = ";
    cout<<convert2binary(n)<<endl;
    return 0;
}