#include<bits/stdc++.h>
using namespace std;

bool isSubarrayPresent(int arr[],int n,int tar){
    
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
            if(sum == tar) return true;
            else sum+=arr[j];
    } 
    return false;
}
int main()
{
    int n; cin>>n; int arr[n]; for(int& i : arr) cin>>i;
    int tar; cin>>tar;
    if(isSubarrayPresent(arr, n, tar)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}