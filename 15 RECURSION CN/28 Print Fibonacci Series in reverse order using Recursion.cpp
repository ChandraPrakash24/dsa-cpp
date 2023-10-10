#include<bits/stdc++.h>
using namespace std;

void printFactorialReverse(int n, int currentVal, int runningSum){
    if(n>0) //base case
    {
        //call
        printFactorialReverse(n-1, runningSum, currentVal+runningSum);

        // process waiting in call stack
        cout<<currentVal<<" ";
    }
}

int main()
{
    int n; cin>>n;
    printFactorialReverse(n,0,1); 
    
    return 0;
}

// OUTPUT
// 10
// 34 21 13 8 5 3 2 1 1 0