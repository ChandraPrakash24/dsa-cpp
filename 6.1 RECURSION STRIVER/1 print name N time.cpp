#include<iostream>
using namespace std;

void printt(int i,int n)
{
    if(i>n) return;

    cout<<"raj"<<endl;
    printt(i+1,n);
}

int main()
{
    int n;
    cin>>n;

    printt(1,n);
    return 0;
}
// void func( i, n )
// {
//    if(i>n) return;
//  print(“Raj”);
//    f( i+1,N );
// }
// main()
// {
//   int n;
//   input(n);
//   f(1,n);
// }