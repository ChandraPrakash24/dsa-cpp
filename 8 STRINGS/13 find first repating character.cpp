#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   getline(cin, s);

    for(unsigned i=0; i<s.size(); i++){
        int cnt=0;
        for(unsigned int j=0 ;j<s.length(); j++ )
        {
            if(s[i] == s[j]){ cnt++; }
        }
        if(cnt > 1){
            cout<<s[i];
            return 0;
        }
    }
    cout<<"Not Found"<<endl;

    return 0;
}