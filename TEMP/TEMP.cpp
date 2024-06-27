// maximum consicutive 1s in an binary array
// TC: O(n), SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int maxConsicutive1s(int * arr, int n){
    int max1s = 0,prevMax=0;

    for(int i=0;i<n;i++){

        if(arr[i] == 1){
            max1s++;
            continue;
        }
        
        if(arr[i] != 1){
            prevMax =  max(max1s,prevMax);
            max1s=0;
        }
    }
    return max1s > prevMax ? max1s : prevMax;
}


int main()
{
    // int arr[] = {0,1,1,0,1,0}; // 2
    // int arr[] = {1,1,1,1,1,1}; // 6
    // int arr[] = {0,0,0,0,0,0}; // 0
    int arr[] = {1,0,1,1,1,1,0,1,1}; // 4
    int n=9;

    cout<<maxConsicutive1s(arr,n);
    
    return 0;
}