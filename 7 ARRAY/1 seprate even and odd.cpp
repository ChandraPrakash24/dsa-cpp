#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
    int l=0,r=n-1;

    while(l<=r){
        if(arr[l] % 2 != 0 && arr[r] % 2 == 0) swap(arr[l++],arr[r--]);
        else {
            if (arr[l] % 2 == 0) l++;
            if (arr[r] % 2 != 0) r--;
        }
    }

    for(auto& i : arr) cout<<i<<" ";

    return 0;
}