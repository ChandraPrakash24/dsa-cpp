// Letter Case Permutation


#include<bits/stdc++.h>
using namespace std;



void solve(string ip, string op, vector<string>& v){
    if(ip.empty()){
        v.push_back(op);
        return;
    }

    if(isalpha(ip[0])){
        string op1 = op;
        op1.push_back(tolower(ip[0]));
        solve(ip.substr(1), op1, v);

        string op2 = op;
        op2.push_back(toupper(ip[0]));
        solve(ip.substr(1), op2, v);
        
        
        
        // string op1 = op;
        // string op2 = op;

        // op1.push_back(tolower(ip[0]));
        // op1.push_back(toupper(ip[0]));

        // // ip.erase(ip.begin());

        // // solve(ip,op1, v);
        // // solve(ip,op2, v);

        // solve(ip.substr(1), op1, v);
        // solve(ip.substr(1), op2, v);
    }else{
        string op1 = op;
        op1.push_back(ip[0]);
        // solve(ip,op1, v);
        solve(ip.substr(1), op1, v);
    }
    return;
}

vector<string> preSolve(string s){

    vector<string> v;
    string ip = s;
    string op = "";

    solve(ip, op, v);
    
    return v;
}


int main()
{
    // string s; cin>>s;
    string s = "a1B2";
    
    vector<string> res = preSolve(s);

    for(auto& i : res) cout<<i<<endl;


    return 0;
}