#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     vector<int> odd;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//         }
//         for(int i=0; i<n-1; i++){
//             int val = a[i+1] - a[i];
//             odd.push_back(val);
//         }
//     }
//     for(auto v : odd){
//         cout<<v<<" ";
//     }
//     cout<<endl;
//     bool flag = true;
//     for(auto v : odd){
//         if(v%2!=1){
//             flag = false;
//         }
//     }
//     if(flag) cout<<"YESS"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }



//
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag = true;
        for(int i=0; i<n-1; i++){
            int val = a[i+1] - a[i];
            if(val%2==0){
                flag = false;
            }
        }
        if(flag) cout<<"YESS"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}