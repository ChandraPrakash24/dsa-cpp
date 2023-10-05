// first traspose then reverse row

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;    cin>>n>>m;
    int mx[n][m];

    for(auto& r : mx) for(auto& e : r) cin>>e;

    for(int i=0; i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(mx[i][j],mx[j][i]);
        }
    } 

    for(int i=0; i<n; i++) reverse(mx[i],mx[i]+n);

    cout<<endl;
    
    for(auto& r : mx){
        for(auto& e : r){
            cout<<e<<" ";
        }
    cout<<endl;
    }

    return 0;
}