#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);
    int output = smallOutput1 + smallOutput2;
    return output;
}

int main()
{
    cout<<fib(4); //3
    // fib series:- 0 1 1 2 3 5

    return 0;
}