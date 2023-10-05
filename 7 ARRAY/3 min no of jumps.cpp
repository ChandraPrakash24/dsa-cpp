#include<bits/stdc++.h>
using namespace std;

int minNoOfJumps(int arr[], int n){
    if (n <= 1) return 0; // only one element in array
    int jump=1, maxReach=arr[0], step=arr[0]; //initilize necessary variables
    for(int i=1;i<n;i++){ // travers each element
        if(arr[i] == 0) return -1;
        if (i == n-1) return jump;

        maxReach = max(maxReach, i+arr[i]);
        step--;
        if(step == 0){
            jump++;
            if(i >= maxReach) return -1;
            step = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
    
    cout<<minNoOfJumps(arr, n);

    return 0;
}