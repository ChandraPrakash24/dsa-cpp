#include<bits/stdc++.h>
using namespace std;

void printNto1(int n){
    if(n==0) return;
    // cout<<n; //  5 4 3 2 1
    printNto1(n-1);
    cout<<n; //  1  2 3 4 5
}

int main()
{
    printNto1(5); 
    
    return 0;
}