#include<bits/stdc++.h>
using namespace std;

int main()
{
    int myArr[6] = {1,2,3,4,5,6}; 

    int * p = myArr;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<myArr<<endl;
    // cout<<myArr[myArr]<<endl;
    cout<<&myArr<<endl;

    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;

    for(int i=0;i<6; i++){
        // cout<<p[i]<<endl;
        // cout<<*(p+i)<<endl;
            // cout<<i<<endl;
    }


    return 0;
}