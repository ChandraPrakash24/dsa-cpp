// maximum sub array sum
// TC: O(n^2), SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int * arr, int n){
    int sum ,prevSum=-1;

    for(int i=0;i<n;i++){
        sum = arr[i];
        cout<<"SUM:"<<sum<<" prevSum:"<<prevSum<<endl;
        for(int j=i+1;j<n;j++){
            sum += arr[j];
            cout<<arr[i]<<" ,"<<arr[j]<<" : "<<sum<<endl;
        }
        prevSum = max(sum,prevSum);
        sum = 0;
    }
    cout<<sum<<" "<<prevSum<<endl;

    if(sum < 0 || prevSum < 0) return -1;
    return prevSum > sum ? prevSum : sum;
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