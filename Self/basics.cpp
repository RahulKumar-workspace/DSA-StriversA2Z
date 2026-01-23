// #include<iostream>
// using namespace std;
// int main()
// {
//     int size = 10;
//     // cout<<"enter size: ";
//     // cin>>size;

//     int arr[size];

//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<size; i++){
//         if(arr[i]%2 == 0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;

//     return 0;
// }

// //print all even no's from 0 to 100;
// //print all odd no's from 0 to 100;

// //print all prime no's form 0 to 100;

// //check if a no is divisible by 5 or not;
// //print all the no's form 0 to 1000 which are divisible by 5;

#include <iostream>
using namespace std;
int main()
{
    const int size = 100; 
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        if(i % 2 == 0){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}