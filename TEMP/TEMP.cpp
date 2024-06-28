// maximum sub array sum
// TC: O(n^2), SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int * arr, int n){
    int sum=0;
    // int sum=arr[0];

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0) sum = 0;
    }

    // for(int i=0;i<n-2;i++){
    //     if((sum += arr[i+1]) < 0){
    //         sum = arr[i+2];
    //         cout<<"sum:"<<sum<<endl;
    //         continue;
    //         cout<<"after continue"<<endl;
    //     }
    //     sum+=arr[i+1];
    // }

    return sum != 0 ? sum : -1;
}


int main()
{
    int arr[] = {2,3,-8,7,-1,2,3}; // 11
    int n=7;
    // int arr[] = {5,8,3}; // 16
    // int n=3;
    // int arr[] = {-6,-1,-8}; // -1
    // int n=3;

    cout<<maxSubArraySum(arr,n);
    
    return 0;
}