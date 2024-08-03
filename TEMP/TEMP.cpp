// Boyer-Moore Majority Voting Algorithm
// TC : O(n)    SC : (1)
#include<bits/stdc++.h>
using namespace std;

// int majorityEl(int *  arr, int n){
int majorityEl(vector<int> & arr, int n){
    int res = 0, count = 1;
    for(int i=1; i<n;i++){
        if(arr[i] == arr[res]) count++;
        else count--;

        if(count == 0) {
            res = i; count = 1;
        }
    }

    count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[res]) count++;
    }

    if(count <= (n/2)) res = -1;

    return res;
}

int main()
{
    int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i;

    // int arr[] = {8,8,6,6,6,4,6};

    // cout<<majorityEl(arr,7);

    int idx = majorityEl(v,n);

    cout<<"majority element is "<<v[idx]<<" at index "<<idx;
    
    return 0;
}