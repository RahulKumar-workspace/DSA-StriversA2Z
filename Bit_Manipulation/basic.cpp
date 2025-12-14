#include<iostream>
// #include<algorithm>
// #include<string>
using namespace std;

string convert2binary(int n);
int convert2decimal(string x);

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


//Tc = O(leng of the string)
//Sc = O(1), coz we are only stroying it in one int.
int convert2decimal(string x){
    int len = x.length();
    int num = 0;
    int power2=1;
    for(int i=len-1; i>=0; i--){
        if(x[i] == '1') num+=power2;
        power2 = power2*2;
    }
    return num;
}

int main(){
    int n = 56;
    // cout<<"Enter no: ";
    // cin>>n;

    cout<<n<<" = "<<convert2binary(n)<<endl;

    string x = "111000";
    cout<<x<<" = "<<convert2decimal(x)<<endl;

    int a = 1;
    return 0;
}