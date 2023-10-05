#include<bits/stdc++.h>
using namespace std;

int main()
{
    string one,two;
    getline(cin,one);
    getline(cin,two);

    string check = one + one;
    auto index = check.find(two);
    if(index != string::npos)
    {
        cout<<"yes they are"<<endl;
    }
    else{
        cout<<"NO they are not"<<endl;
    }


    return 0;
}