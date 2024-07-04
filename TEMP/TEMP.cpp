// permutation with case Changes

#include<bits/stdc++.h>
using namespace std;

void permutationWithCaseChange(string ip_string, string op){

    if(ip_string.empty()){
        cout<<op<<endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip_string[0]);
    op2.push_back(toupper(ip_string[0]));


    ip_string.erase(ip_string.begin());

    permutationWithCaseChange(ip_string,op1);
    permutationWithCaseChange(ip_string,op2);

    return;

}


int main()
{
    string s; cin>>s;
    string op = "";

    permutationWithCaseChange(s,op); 
    
    /*
        i/p:-
            ab
        output:-
            ab
            aB
            Ab
            AB
     */

    return 0;
}