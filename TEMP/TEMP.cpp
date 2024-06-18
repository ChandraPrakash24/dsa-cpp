#include<bits/stdc++.h>
using namespace std;

void remDupInSortedArr(int *arr, int& n){
    int j=1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[j-1]){
            arr[j] = arr[i];
            j++;
        }
    }
    n=j;
}


int main()
{

    int arr[] = {1,1,1,8,8,9,9,10,10,10,11};
    // int arr[] = {1,8,9,10,11};
    // int arr[] = {10,10,10};
    // int arr[] = {1,8,9,10,10,10,11};
    int n=11;
    remDupInSortedArr(arr,n); 


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
