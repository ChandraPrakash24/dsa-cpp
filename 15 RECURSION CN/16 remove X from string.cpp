#include<bits/stdc++.h>
using namespace std;

void removeX(char s[]){
    //base case
    if(s[0] == '\0' ) return;

    if(s[0] != 'x') removeX(s+1);
    else{
        int i=1;
        for( ; s[i] != '\0'; i++){
            s[i-1] = s[i];
        }
        s[i-1] = s[i]; // to copy the last null delimeter or character
        removeX(s);
    }

}

int main()
{
    char s[100]; cin>>s;

    cout<<strlen(s)<<endl; 
    removeX(s);
    cout<<s<<endl;
    cout<<strlen(s)<<endl; 
    
    return 0;
}