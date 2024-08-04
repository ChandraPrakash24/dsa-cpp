#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;

    // int arr[n] = {}; // 
    // int arr[n] = {1}; // 
    int arr[n] = {1, 0, 1, 0, 1}; // from 1 to 1 from 3 to 3
    // int arr[n] = {0,1}; // from 1 to 1 
    // int arr[n] = {0,0,0,0,0,0}; 
    // int arr[n] = {0,0,1,1,1,0}; 
    // int arr[n] = {1,1,0,0,0,1}; 

    if (n == 0) {
        cout << "0" << endl; // No elements in the array
        return 0;
    }
    
    if (n == 1) {
        cout << "1" << endl; // Single element array, only one group
        return 0;
    }


    // assumption 1 : if arr[0] == arr[n-1] then one less group (any 1 or 0)
    // assumption 2 : if arr[0] != arr[n-1] then equal group of 1 or 0
    // we alsway flip 2nd group (any 1 or 0)

    for(int i=1; i<n ; i++) {
        if(arr[i] != arr[i-1]){ // to detect transition from either 0 to 1 or 1 to 0
            if(arr[i] != arr[0]) cout<<"from "<<i<<" to "; // which transition: start (0 -> 1) 
            else cout<<i-1<<endl; // which transition: end (1 -> 0) 
        }
    }  
    if(arr[n-1] != arr[0]) cout<<n-1<<endl; // to handle last fit flip as ne group and ended there as well ex : 0011001101 < -- this last 1

    return 0;
}