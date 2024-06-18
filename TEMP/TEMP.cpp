#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i =0; i<n-1; i++){
        if(arr[i+1] < arr[i]){
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    int arr[] = {10,8,9};
    cout<<isSorted(arr,3); 

    return 0;
}

// using reffference:-

// #include <iostream>
// using namespace std;

// // Function declaration with int& arr and int n
// bool isSorted(int* arr, int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {8, 12, 15};
//     cout << isSorted(arr, 3); // Passes arr as int*

//     return 0;
// }
