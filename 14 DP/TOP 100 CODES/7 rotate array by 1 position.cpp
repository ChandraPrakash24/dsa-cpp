#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;    cin>>n;
    int arr[n];   for(auto& i : arr) cin>>i;
    int temp=arr[n-1];
    for(const auto& i : arr) cout<<i;
    cout<<endl;
    for(int i=0 ; i<=n-1 ; i++)
    {
        arr[n-1]=arr[n-i-1];//=arr[i];
    }
    arr[0]=temp;
    // cout<<arr[3];
    for(auto& i : arr) cout<<i;

    return 0;
}