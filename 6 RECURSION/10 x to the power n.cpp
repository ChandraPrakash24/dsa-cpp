#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n == 1) return x;

    return x * power(x, n-1);
}

int main()
{
    cout<<power(2,5); 
    // 2^5 =  32

    return 0;
}