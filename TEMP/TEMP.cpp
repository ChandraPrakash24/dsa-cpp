#include<bits/stdc++.h>
using namespace std;

void reverse(int * arr, int l, int r){
    while(l < r){
        swap(arr[l++],arr[r--]);
    }
}

void leftRotateByD(int * arr, int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5}; 

    leftRotateByD(arr,5,2);
    
    for(auto& i : arr) cout<<i<<" ";

    return 0;
}