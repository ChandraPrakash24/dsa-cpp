#include<bits/stdc++.h>
using namespace std;

int trappingTheRainWater(int * arr, int n){
    
    int res=0;
    int lMaxArr[n], rMaxArr[n];
    int lMax = arr[0];
    
    for(int l=0;l<n;l++){
        if(arr[l] > lMax) {
            lMax = arr[l];
            lMaxArr[l] = arr[l];
            continue;   
        }

        lMaxArr[l] = lMax;
    }

    int rMax = arr[n-1];
    for(int r=n-1;r>=0;r--){
        if(arr[r] > rMax) {
            rMax = arr[r];
            rMaxArr[r] = arr[r];
            continue;   
        }

        rMaxArr[r] = rMax;
    }

    for(int i=1;i<n-1;i++){
        res += (min(lMaxArr[i],rMaxArr[i]) - arr[i]);
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
