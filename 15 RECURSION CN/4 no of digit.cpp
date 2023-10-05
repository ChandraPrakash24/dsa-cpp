#include<bits/stdc++.h>
using namespace std;

int cnt=1; // Initialize cnt to 1 for the last digit

void count(int x){
    if(x/10 == 0) return;
    cnt++;
    count(x/10); // reduce by one
    // cnt++;  // no change
}

int main()
{
    count(1234); 
    cout<<cnt;

    return 0;
}