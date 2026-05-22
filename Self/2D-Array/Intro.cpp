#include<iostream>
#include<vector>
using namespace std;

// We HAVVE to give the 'column' size!!
void print2Darray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cout<<arr[i][j]<<" ";

    cout<<endl;
}


// For this simple method their size HAS to be the same otherwise it won't work.
void sumof2Darray(int arr1[][4], int arr2[][4], int row, int col){
    int ans[3][4];
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    ans[i][j] = arr1[i][j] + arr2[i][j];

    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cout<<ans[i][j]<<" ";

    cout<<endl;
}

int main(){
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {1,3,5,7,9,10,11,12,13,15,17,20};
    print2Darray(arr1, 3,4);

// Print the sum of 2 2D array
    sumof2Darray(arr1, arr2, 3, 4);

    return 0;
}