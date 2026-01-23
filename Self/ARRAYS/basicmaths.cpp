#include <iostream>
#include<cmath>
using namespace std;

int count(int num);
int reverse(int n);

//01 -> Count the no of digits.
/*int count(int num) {
    cout << num<<endl;

    int lastdigit = 0;
    int sum = 0;

    while(num > 0){
        lastdigit = num%10;
        sum+=lastdigit; 
        num = num/10;
        cout<<lastdigit<<" added added to the sum!"<<endl;
    }

    return sum;
}*/
// OR
/*int count(int n) {
    int cnt = 0;

    cnt = (int)(log10(n)+1);
    return cnt;
}*/


//02 -> Reverse a no:
int reverse(int n){
    int rev = 0;
    while(n>0){
        int lastdigit = n%10;
        n = n/10;
        rev = rev*10+lastdigit;
    }
    return rev;
}

int main(){
    int n = 1234500;
    // cout<<count(n)<<endl;

    cout<< reverse(n)<<endl;
    return 0;
}





