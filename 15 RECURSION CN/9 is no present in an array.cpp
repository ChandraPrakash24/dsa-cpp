#include<bits/stdc++.h>
using namespace std;

bool checkNo(int arr[],int size, int tar){
    if(size == 1 && arr[0] != tar ) return false;

    if(arr[0] == tar) return true;

    checkNo(arr+1,size-1,tar);
 }


int main()
{
    int n=1;
    int tar=1;
    // int arr[]={1,2,3,4,5}; 
    int arr[]={2}; 
    
    cout<<checkNo(arr,n,tar);


    return 0;
}