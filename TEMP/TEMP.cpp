#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int * arr, int n){
    int f = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = f;
}

int main()
{
    int arr[] = {1,2,3,4,5}; 

    leftRotateByOne(arr,5);
    
    for(auto& i : arr) cout<<i<<" ";

    return 0;
}