#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sumD1 = 0,sumD2 = 0;  cin>>n>>m;

    int mx[n][m]; 

    for(auto& r : mx)  for(auto& e : r) cin>>e;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(i == j) sumD1 += mx[i][j];
            if(i+j == m-1) sumD2 += mx[i][j];
            // here m-1 is imp
        }
    
    cout<<"Diff is : "<<abs(sumD1 - sumD2);

    return 0;
}