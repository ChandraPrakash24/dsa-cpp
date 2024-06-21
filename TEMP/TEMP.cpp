#include<bits/stdc++.h>
using namespace std;

void freqInSortedArr(int * arr,int & n){
    if(n == 1 ||n == 0){
        cout<<arr[0]<<" : "<<1<<endl;
        return;
    }

    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            cout<<arr[i-1]<<" : "<<cnt<<endl;
            cnt=1;
            continue;
        }
        cnt++;
    }
    cout<<arr[n-1]<<" : "<<cnt<<endl;
}


int main()
{
    // int arr[] = {10,10,10,25,30,30,30,30,30,40}; 
    // int n=10;
    // int arr[] = {10}; 
    // int n=1;
    int arr[] = {10,20}; 
    // int arr[] = {10,10}; 
    int n=2;

    freqInSortedArr(arr,n);
    
    /*
    10 : 3
    25 : 1
    30 : 5
    40 : 1
    */

    return 0;
}