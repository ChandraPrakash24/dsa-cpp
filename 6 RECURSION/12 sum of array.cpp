#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n){
    if(n == 0) return arr[n];

    return arr[n] + sumOfArray(arr, n-1);
}


int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    // int sum=0;

    cout<<sumOfArray(arr,n-1); 

    return 0;
}

// #include <iostream>
// using namespace std;

// int sumOfArray(int arr[], int n, int sum = 0) {
//     if (n < 0) {
//         return sum;
//     }
//     return sumOfArray(arr, n - 1, sum + arr[n]);
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int sum = sumOfArray(arr, 5 - 1);
//     cout << sum << endl;

//     return 0;
// }