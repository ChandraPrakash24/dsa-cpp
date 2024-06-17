#include<bits/stdc++.h>
using namespace std;

int getLargestElIndex(int arr[], int n){
    int large = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[large]) large = i;
    }

    return large;
}

int getSecondLargestElIndex(int arr[], int n){
    int largest = getLargestElIndex(arr,n);
    int res = -1;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[largest]){
            if(res == -1) res = i;
            else if(arr[i] > arr[res]) res = i;
        }
    }
    return res;
}

int main()
{
    // int arr[] = {5,20,12,20,10}; 
    int arr[] = {10,10,10}; 
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    int sl = getSecondLargestElIndex(arr,arrSize);
    cout<<sl; // -1

    // cout<<"The second largest element is : "<<arr[sl]<<" at position : "<<sl+1<<" at array index : (zero based) "<<sl<<endl;
    // OUT:
    // The second largest element is : 12 at position : 3 at array index : (zero based) 2

    return 0;
}