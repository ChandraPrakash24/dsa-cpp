// row -> col , col -> row

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;   cin>>n>>m;
    int mx[n][m];

    for(auto& r : mx) for(auto& e : r) cin>>e;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){ //j=i+1 is imp
            if(i == j) continue; 
            else swap(mx[i][j],mx[j][i]);
        }
    }

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<i;j++){ //digonal se pahale tak
    //         for(int j=i;j<m;j++){ // diagonal se akhari tak
    //             swap(mx[i][j],mx[j][i]);
    //     }
    // }

    for(auto& r : mx){
        for(auto& e : r){
            cout<<e<<" ";
        }
        cout<<endl;
    }


    return 0;
}