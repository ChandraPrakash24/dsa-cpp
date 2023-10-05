#include<iostream>
using namespace std;

void fun(int i, int n)
{
    if(i<n) return;

    cout<<i<<endl;
    fun(i-1,n);
}

int main()
{
    fun(10,1);
    return 0;
}