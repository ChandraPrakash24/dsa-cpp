#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;    cin>>n;
    vector<int> v(n);   for(auto& i : v) cin>>i;
    int max=v[0];
    for(auto& i : v) if(i > max)  max = i;
    cout<<max;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;    cin>>n;
//     int arr[n];   for(auto& i : arr) cin>>i;
//     int max=arr[0];
//     for(auto& i : arr) if(i > max)  max = i;
//     cout<<max;
//     return 0;
// }