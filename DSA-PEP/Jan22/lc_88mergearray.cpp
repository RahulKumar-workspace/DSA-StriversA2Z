#include<bits/stdc++.h>
using namespace std;



// WRONGGGGGGG

int main(){
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for(int i=size2; i<size1; i++){
        for(int j=0; j<size2; j++){
            arr1[i] = arr2[j];
        }
    }

    for(int i=0; i<size1; i++){
        cout<<arr1[i]<<" ";
    }

    
    return 0;
}