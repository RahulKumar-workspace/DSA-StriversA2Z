#include <bits/stdc++.h>
using namespace std;

//JAN 20th

int reverseBits(int n){
    // int res = 0;
    
    // for(int i = 0; i < 32; i++){
    //     res = (res << 1) | (n & 1);  // take last bit and push to result
    //     n = n >> 1;                   // shift input right
    // }
    
    // return res;

    int rev = 0;

    for(int i = 0; i < 32; i++) {       // 32-bit integer
        rev = (rev << 1);               // make space for next bit
        rev = rev | (n & 1);            // copy last bit of n
        n = n >> 1;                     // shift n right
    }

    return rev;
}

int main(){
    int n = 43261596; 
    cout << reverseBits(n)<<endl;  

// Print the reversed bits:
    // int rev = reverseBits(n);
    // for(int i = 0; i < 32; i++){
    //     rev = (rev << 1) | (n & 1);
    //     n >>= 1;
    // }
    // cout << bitset<32>(rev) << endl;
//OR
    // bitset<32> b(n);        // convert to 32-bit binary
    // cout << b << endl;      // original 32 bits

    // string s = b.to_string();
    // reverse(s.begin(), s.end());

    // cout << s << endl;

    
    return 0;
}