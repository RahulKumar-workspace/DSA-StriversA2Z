#include<iostream>
using namespace std;

// int main(){
//     int arr[] = {12,345,2,6,7896};

//     int total = 0;
//     int count = 0;
//     for(int i=0 ;i<4; i++){
//         while(arr[i] > 0){
//             int lastdigit = arr[i]%10;
//             arr[i] = arr[i]/10;
//             // cout<<lastdigit<<" ";
//             count+=1;
//         }
//         if(count%2 == 0){
//             total+=1;
//         }
//         count = 0;
//     }
//     cout<<total<<endl;
//     return 0;
// }


#include <cmath>

int main() {
    int arr[] = {12, 345, 2, 6, 7896};

    int total = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int digits = (arr[i] == 0) ? 1 : floor(log10(arr[i])) + 1;
        if (digits % 2 == 0)
            total++;
    }

    cout << total << endl;
    return 0;
}