#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; getline(cin,s);

    for(auto& c : s)
        if(isdigit(c) || !isalnum(c)) cout<<c; 
        else if(!isupper(c)){
            if(!isspace(c)) cout<<char('z' - (c - 'a'));
            // if(c >= 'a' && c <= 'z') cout<<char('z' - (c - 'a'));
        }
        else cout<<c;

    return 0;
}