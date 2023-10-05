#include<iostream>
using namespace std;

int powerOfTwo(int x){

    if(x == 0)
        return 1;
    return 2 * powerOfTwo(x-1);
}

int main()
{
    int n;
    cin>>n;

    int ans = powerOfTwo(n);

    cout<<"power of two is: "<< ans <<endl;
    return 0;
}