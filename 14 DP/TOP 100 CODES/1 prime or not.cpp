#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}

int main() {

    int n =11;
    cout<<factorial(n) % n<<endl;
    return 0;
}
