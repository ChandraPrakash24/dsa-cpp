#include<bits/stdc++.h>
using namespace std;

void moveZeros(int *arr, int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[k++],arr[i]);
        }
    }
}

int main()
{  
    // int arr[] = {8,5,0,10,0,20};
    int arr[] = {10,10,10};

    moveZeros(arr,6);
    
    for(auto& i : arr) cout<<i<<" ";

    return 0;
}