#include<bits/stdc++.h>
using namespace std;

int multOfArray(int arr[], int n, int m = 1){
    if(n<0) return m;
    else return multOfArray(arr,n-1,m *= arr[n]);
}

int main()
{
    int n=5;
    int arr[n]= {1,2,3,4,5};

    cout<<multOfArray(arr,n-1);

    return 0;
}