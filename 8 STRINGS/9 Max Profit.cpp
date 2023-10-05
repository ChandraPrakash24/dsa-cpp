#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; int arr[n]; for(int& i : arr) cin>>i;

    int globalMax=0;
    for(int i=0; i<n; i++){
        int tempMax=0;
        for(int j=i+1; j<n; j++){
            int temp = abs(arr[i] - arr[j]);
            if(temp > tempMax) tempMax = temp;
        }
        globalMax = max(globalMax, tempMax);
    }

    cout<<globalMax;
    return 0;

}


// 4 1 23 9 7