// maximum sub-array sum (optmize solution)
// TC: O(n)   SC: O(1)
// KADANE'S ALGORITHAM

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3}; // 7
    // int arr[] = {2}; // 2
    // int arr[] = {5,4,1,7,8}; // 25
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = arr[0];
    int curr_sum = arr[0];

    for(int i=1; i<n; i++){
        if((arr[i] + curr_sum) >= 0){
            curr_sum += arr[i];
            max_sum = max(curr_sum,max_sum);
        }else{
            curr_sum = 0;
        }
    }
    
    cout<<max_sum;

    return 0;
}