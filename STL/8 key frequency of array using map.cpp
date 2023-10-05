#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;

    map<int,int> mp;

    for(auto& i : arr) mp[i]++;

    for(auto& x : mp)
        cout<<x.first<<" "<<x.second<<endl; 
  
    return 0;
}