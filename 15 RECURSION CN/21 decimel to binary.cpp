#include<bits/stdc++.h>
using namespace std;

int convert(int n){
    if(n == 0) return 0;
    else return n%2 + 10 * convert(n/2);
}

int main()
{
    int n; cin>>n;

    cout<<convert(n); 
    
    return 0;
}