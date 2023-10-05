#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int mx[n][m];

    for(auto& r : mx) for(auto& e : r) cin>>e;

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (i==0 || i==n-1 || j==0 || j==m-1){
                cout<<mx[i][j]<<" ";
                sum+= mx[i][j];
            }else cout<<" ";
        }
        cout<<endl;
    }
    cout<<sum;
    return 0;
}