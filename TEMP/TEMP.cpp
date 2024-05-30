// All subset of string (recursion)

#include <iostream>
using namespace std;

void stringSubSets(string s, string current = "", int inx = 0){

    if(inx == s.length()){
        cout<<current<<endl;
        return;
    }

    stringSubSets(s,current,inx+1);
    stringSubSets(s,current+s[inx],inx+1);

}

int main()
{
    stringSubSets("A");
    return 0;
}