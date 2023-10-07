#include<bits/stdc++.h>
using namespace std;

int multi(int a, int b)
{
    return a * b;
}

int multi(int n, int m, int p, int q){
    return multi(multi(n,m),multi(p,q));
}

int main()
{
    int n,m,p,q;  cin>>n>>m>>p>>q;

    cout<<multi(n,m,p,q); 
    
    return 0;
}