#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
    int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i;
    int oddG = 0,evenBlue = 0;

    // for(int i=0; i<n;i++){
    // if(i % 2 != 0) oddG += v[i];
    // else evenBlue += v[i];
    // }


    int cnt=0;
    for(auto& i : v){
        // if((cnt++) & (1 != 0)) oddG += i;
        if(cnt++ % 2 != 0) oddG += i;
        else evenBlue += i;
    }

    if(oddG-evenBlue == 0) cout<<"DRAW"<<endl;
    else if(oddG > evenBlue) cout<<"Green "<<oddG-evenBlue<<endl;
    else cout<<"Blue "<<evenBlue-oddG<<endl;

    return 0;
}