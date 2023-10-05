// first reverse all row then swap column till <m/2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int mx[n][m];

    for(auto& r : mx) for(auto& e : r) cin>>e;

    for(int i=0; i<n;i++) reverse(mx[i],mx[i]+n);

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            swap(mx[i][j],mx[n-1-i][j]);
        }
    }

    cout<<endl;

    for(auto& r : mx){
        for(auto& e : r) cout<<e<<" ";
    cout<<endl;
    } 
    return 0;
}