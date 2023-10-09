#include<bits/stdc++.h>
using namespace std;

int stringLength(string str){
    if(str.length() == 0) return 0;
    if(str.length() == 1) return 1;

    if(str.front() == ' ') return stringLength(str.substr(1));

    return 1 + stringLength(str.substr(1));

}

int main()
{
    string s = "lord of the rings"; 
    cout<<stringLength(s);
    
    return 0;
}