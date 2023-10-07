#include<bits/stdc++.h>
using namespace std;

int stringLen(char s[]){
    //base case
    if(s[0] == '\0' ) return 0;

    //process
    int restOftheStringLen = stringLen(s+1);

    //call
    return 1 + restOftheStringLen;
}

int main()
{
    char s[100];
    cin>>s; 
    
    cout<<stringLen(s);

    return 0;
}