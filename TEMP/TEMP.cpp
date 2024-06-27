#include<bits/stdc++.h>
using namespace std;

int trappingTheRainWater(int * arr, int n){
    int res=0;

    for(int i=1;i<n-1;i++){

        int lMax=arr[i];
        for(int l=0;l<i;l++){
            // if(arr[l] > lMax) lMax = arr[i]; 
            lMax = max(arr[l],lMax);
        }

        int rMax=arr[i];
        for(int r=i+1;r<n;r++){
            // if(arr[r] > rMax) rMax = arr[i]; 
            rMax = max(arr[r],rMax);
        }

        res += (min(lMax,rMax) - arr[i]);
    }
    return res;
}

int main()
{
    // int arr[] = {5,0,6,2,3}; // 6
    // int arr[] = {3,0,1,2,5}; // 6
    int arr[] = {4,2,0,3,2,5}; // 9
    int n=6;

    cout<<trappingTheRainWater(arr,n);

    return 0;
}
