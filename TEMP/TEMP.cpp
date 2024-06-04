#include<bits/stdc++.h>
using namespace std;

void printSubSet(string &str, string current = "", int index = 0){
    if(index == str.length()){
        cout<<current<<endl;
        return;
    }

    printSubSet(str, current, index + 1);
    printSubSet(str, current+str[index], index + 1);
}

int main()
{
    string s = "abc";

    printSubSet(s); 

    return 0;
}
