#include<bits/stdc++.h>
using namespace std;

int countWord(string s)
{
    int v=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == ' ') continue;
        // else if(s[i] == 'a' || 'e' || 'i'  || 'o' || 'u') v++;  MISTAKE
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v++; // also include capital letter
    }
    return v;
}

int main()
{
    string s;
    getline(cin,s);
    
    cout<<countWord(s)<<endl;
}