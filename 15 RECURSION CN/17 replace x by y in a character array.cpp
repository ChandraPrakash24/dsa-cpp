#include<bits/stdc++.h>
using namespace std;

void replaceXbyY(char s[]){
    //base
    if(s[0] == '\0') return;

    //process
    if(s[0] == 'b') s[0] = 'x';

    //call
    replaceXbyY(s+1);
}

int main()
{
    char s[100];  cin>>s;
    replaceXbyY(s);
    cout<<s;

    return 0;
}