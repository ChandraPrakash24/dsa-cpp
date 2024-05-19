#include<iostream>
using namespace std;

int c=55;

int main()
{
    int a = 3;
    int * b = &a;

    // cout<<a<<endl; 
    // cout<<&a<<endl;
    cout<<b<<endl;
    // cout<<&b<<endl;
    // cout<<*b<<endl;

    int ** c = &b;
    // cout<<c<<endl;
    // cout<<*c<<endl;
    cout<<**c<<endl;

    // c --> b --> a

    return 0;

}