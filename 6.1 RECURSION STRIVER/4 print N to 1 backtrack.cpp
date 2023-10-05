#include<iostream>
using namespace std;

void fun(int i , int n)
{
    if(i>10) return;

    fun(i+1,n); //althgough call in right put print in reverse
    cout<<i<<endl; //baecouse of this print line is after recursive call
}

int main()
{
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}