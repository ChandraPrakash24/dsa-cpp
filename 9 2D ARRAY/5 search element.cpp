#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,tar; cin>>n>>m>>tar;

    int matrix[n][m],i=-1;

    for(auto& r : matrix) for(auto& e : r) cin>>e;

    for(auto& r : matrix)
        for(auto& e : r)
        {   i++;
            if(e == tar){
                cout<<"i is :"<<i<<" YES"<<" at index:"<<i/m<<","<<i%m;
                return 0;
            } 
        }
    

    cout<<"NO"<<endl;

    return 0;
}