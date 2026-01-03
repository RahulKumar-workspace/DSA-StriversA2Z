#include<iostream>
using namespace std;


int main(){

    int N = 13;
    int i = 2;

    if(((N>>i)&1) > 0){
        cout<<"set"<<endl;
    }else{
        cout<<"not set"<<endl;
    }

    return 0;
}