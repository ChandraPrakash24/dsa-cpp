#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int si=0;

    for(int i=0; s[i]!='\0'; i++)
    {
        cout<<i;
        if(s[i] == ' ') continue;
        else si++;
    }

    cout<<si<<endl;
    return 0;

}
