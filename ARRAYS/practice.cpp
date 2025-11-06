#include <iostream>
using namespace std;

int main() {
    int num = 1234;
    cout << num<<endl;

    int lastdigit = 0;
    int sum = 0;

    while(num > 0){
        lastdigit = num%10;
        sum+=lastdigit; 
        num = num/10;
        cout<<lastdigit<<" added added to the sum!"<<endl;
    }

    cout<<sum<<endl;
    return 0;
}