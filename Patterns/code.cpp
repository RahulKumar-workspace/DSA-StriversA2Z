#include <iostream>
using namespace std;

void print1(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< i <<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j< n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//pyramid
void print7(int n){
    for(int i=0; i<n; i++){
            //spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            //stars
            for(int j=0; j<i*2+1; j++){
                cout<<"*";
            }
            //spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
    }
}

//inverted pyramid
void print8(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<((2*n)-(2*i+1)); j++){
            cout<<"*";
        }
        //spaces
         for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//both the above combined
void print9(int n){
    for(int i=0; i<n-1; i++){
            //spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            //stars
            for(int j=0; j<i*2+1; j++){
                cout<<"*";
            }
            //spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
        }
            
    for(int i=0; i<n; i++){
            //spaces
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            //stars
            for(int j=0; j<((2*n)-(2*i+1)); j++){
                cout<<"*";
            }
            //spaces
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }


void print10(int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0 ;i<n; i++){
        for(int j=1 ;j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print100(int n){
    for(int i=1 ;i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print11(int n){
    int start = 100;
    for(int i=0; i<n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
}

void print12(int n){
    int spaces = 2 * (n-1);
    for(int i=1; i<n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j<<"";
        }

        //spaces
        for(int j=0; j<8-(2*i); j++){
            cout<<" ";
        }
        //or
        // for(int j=1; j<=spaces;j++){
        //     cout<<" ";
        // }

        //numbers
        for(int j=i; j>0; j--){
            cout<<j<<"";
        }
        cout<<endl;
        spaces-= 2;
    }
}

void print13(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

int main(){
    int t;
    t = 1;
    for(int i=0; i<t; i++){
        int n;
        n = 5;
        print13(n);
    }
    return 0;
}