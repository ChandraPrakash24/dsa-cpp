#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
    int tar;  cin>>tar;
    sort(arr,arr+n);

    int l=0, r=n-1;
    while(l<=r){
        int mid = (l + r)/2;
        if(arr[mid] == tar){ cout<<mid; return 0; }
        else if(arr[mid] < tar) l = mid + 1; //no equal to
        else r = mid - 1;
    }
    
    cout<<"Not Found";


    return 0;
}