#include<iostream>
using namespace std;

void fun(int i , int n)
{
    if(i<1) return;

    fun(i-1,n); //althgough call in reverse put print in right
    cout<<i<<endl; //baecouse of this print line is after recursive call
}

int main()
{
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}