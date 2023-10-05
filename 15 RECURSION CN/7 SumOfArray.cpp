#include<bits/stdc++.h>
using namespace std;

int SumOfArray(int arr[],int size){
    // base case
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    // call
    int forwordSum = SumOfArray(arr + 1, size - 1);
    //                OR
    //return arr[0] + SumOfArray(arr + 1, size - 1);

    // kaam
    int calculate = arr[0] + forwordSum;
    return calculate;  

}

int main()
{

    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i; 
    cout<<SumOfArray(arr,n);

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int SumOfArray(int arr[], int size) {
//     // base case
//     if (size == 0) return 0;
    
//     // process
//     int calculate = arr[0] + SumOfArray(arr + 1, size - 1);
    
//     return calculate;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (auto& i : arr) cin >> i;
    
//     cout << SumOfArray(arr, n);

//     return 0;
// }
