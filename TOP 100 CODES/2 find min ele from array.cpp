#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {45,65,34,56,78,75};
    vector<int> v = {45,65,34,56,78,75};


    // int temp=arr[0];
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i =1; i<n; i++)
    // {
    //     if(temp < arr[i]) continue; 
    //     else temp=arr[i];
    // }

    // app2
    // int *temp=min_element(begin(arr),end(arr));
    // cout<<*temp<<endl;

    auto min = min_element(v.begin(),v.end());
    cout<<*min<<endl;

    return 0;
}