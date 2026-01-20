#include<iostream>
#include <cmath>
using namespace std;

bool armstrong(int n);

bool armstrong(int n){
    int arm = 0;
    int original = n;
    int temp = n;

    int count = 0;
    while(temp != 0){
        temp = temp/10;
        count++;
    }

    while(n != 0){
        int lastdigit = n%10;

        arm += pow(lastdigit,count);
        n = n/10;
    }
    
    if(original==arm)
    return true;
    else
    return false;
}

int main(){
    int n;
    cin>>n;

    cout<<armstrong(n)<<endl;
    return 0;
}