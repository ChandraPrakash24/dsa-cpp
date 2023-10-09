#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    //base
    if(n == 0) return 0;
    if(n < 10) return n;

    // process
    int lastDigit = n%10;

    // call
    return lastDigit + sum(n/10);

}

int main()
{
    int n; cin>>n;

    cout<<sum(n); 

    return 0;
}