#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;

    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
     

    for(auto& i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}