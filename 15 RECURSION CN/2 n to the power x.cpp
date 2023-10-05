#include<bits/stdc++.h>
using namespace std;

// int n; // for generic case

int power(int x){
    if(x==1) return 2;
    // if(x==1) return n; // for generic case
    int smallOutput = power(x-1);
    int output = 2 * smallOutput;
    // int output = n * smallOutput; // for generic case
    return output;
}

int main()
{
    // cin>>n; // for generic case
    cout<<power(4); 
    
    return 0;
}
// 16