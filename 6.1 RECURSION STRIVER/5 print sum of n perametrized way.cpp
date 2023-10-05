#include<iostream>
using namespace std;

void fun(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    fun(i-1,sum+i);
}

int main()
{
    fun(3,0);
    return 0;
}