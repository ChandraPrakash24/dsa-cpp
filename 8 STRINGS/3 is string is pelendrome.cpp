#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    string orignal =s;
    reverse(s.begin(),s.end());
    if(orignal == s) cout<<"yes Pelendrome";
    else cout<<"Not";
    cout<<s<<endl;

}