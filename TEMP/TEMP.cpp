#include<bits/stdc++.h>
using namespace std;


void solve(string s, string out){

    if(s.empty()){
        cout<<out<<endl;
        return;
    }

    solve(s.substr(1),out + ' ' + s[0]);
    solve(s.substr(1),out + s[0]);

}

int main()
{
    string s; cin>>s;

    solve(s.substr(1),string(1,s[0])); 
    
    return 0;
}

// out:-
// abc

// a b c
// a bc
// ab c
// abc
