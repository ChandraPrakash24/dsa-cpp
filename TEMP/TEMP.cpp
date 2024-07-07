// Generate all balance paranthesis

#include<bits/stdc++.h>
using namespace std;

void solve(int n, string op, int o, int c, vector<string>& v){
    if(o == 0 && c == 0){
        v.push_back(op);
        return;
    }

    if(o != 0){
        string op1 = op;
        op1.push_back('(');
        solve(n,op1,o-1,c,v);
    }

    if(o < c){
        string op1 = op;
        op1.push_back(')');
        solve(n,op1,o,c-1,v);
    }

    return;
}

vector<string> genAllBalParen(int n){
    int o = n, c = n;
    string op = "";
    vector<string> v;
    solve(n,op,o,c,v);
    return v;
}

int main()
{
    // int n=2;
    int n=3;
    vector<string> res = genAllBalParen(n);

    for(auto& i : res) cout<<i<<endl;
    
    return 0;
}

// OUTPUT:-

// for n = 2
// (())
// ()()

// for n = 3
// ((()))
// (()())
// (())()
// ()(())
// ()()()