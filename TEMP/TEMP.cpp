#include<bits/stdc++.h>
using namespace std;

void reverseArr(int *arr, int n){
    int i=0, j=n-1;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
}

int main()
{

    int arr[] = {1,8,8,9};
    reverseArr(arr,4); 

    for(auto& i : arr) cout<<i<<" ";

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
