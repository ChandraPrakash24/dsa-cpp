#include<bits/stdc++.h>
using namespace std;

int StringLength(string str){
    if(str.length() == 0) return 0;
    if(str.length() == 1) return 1;

    if(str.front() == ' ') return StringLength(str.substr(1));

    return 1 + StringLength(str.substr(1));

}

int main()
{
    string s = "lord of the rings"; 
    cout<<StringLength(s);
    
    return 0;
}