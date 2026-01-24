#include <bits/stdc++.h>
using namespace std;

//brute:
int main() {
	int n, q;
	cin>>n >> q;
	
	vector<long long> a(n);
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	
	while(q--){
	    long long x;
	    cin >> x;
	    
	    long long ans = 1;
	    bool zero = false;
	    
	    for(int i=0; i<n; i++){
	        long long val = x-a[i];
	        if(val == 0){
	            zero = true;
	            break;
	        }
	        ans*= val;
	    }
	    if(zero){
	        cout<<"0\n";
	    }else if(ans>0){
	        cout<<"POSITIVE\n";
	    }else{
	        cout<<"NEGATIVE\n";
	    }
	}
    return 0;
}