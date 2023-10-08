#include<bits/stdc++.h>
using namespace std;

int meanOfArray(int arr[], int n,int totalno){
    //base
    if(n == 0) return 0;
    //process
    int sum = meanOfArray(arr+1, n-1,totalno);
    return arr[0] + sum;
}

int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;

    int ans = meanOfArray(arr,n,n); 
    cout<<ans/n;
    
    return 0;
}