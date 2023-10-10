#include<bits/stdc++.h>
using namespace std;

int setBit(int n){
    if(n == 0 ) return 0;

    if((n & 1) == 1) return 1 + setBit(n >> 1); 
    else return setBit(n >> 1);

    //        OR 

    // return (n & 1) + setBit(n >> 1);  
}

int main()
{
    int n; cin>>n;
    cout<<setBit(n); 
    return 0;
}