// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;   cin>>n;
//     int arr[n];  for(auto& i : arr) cin>>i;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     int k=2;
//     cout<<"min is = "<<arr[k-1]<<endl;
//     cout<<"max is = "<<arr[size-k]<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;   cin>>n;
    int arr[n];
    for(auto& i : arr) cin>>i;
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    sort(arr,arr+n);
    cout<<"min is ="<<arr[k-1]<<endl;
    cout<<"max is ="<<arr[size-k]<<endl;
    return 0;
}