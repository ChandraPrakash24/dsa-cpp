// Print N-bit binary numbers having more 1’s than 0’s for any prefix

#include<bits/stdc++.h>
using namespace std;

void solve(int o, int z,string op, int n, vector<string>& v){
    if(n == 0){
        v.push_back(op);
        return;
    }

    if(o == z){
        string op1 = op;
        op1.push_back('1');
        solve(o+1,z,op1,n-1,v);
    }

    if(o > z){
        string op1 = op;
        string op2 = op;
        op1.push_back('1');
        op2.push_back('0');
        solve(o+1,z,op1,n-1,v);
        solve(o,z+1,op2,n-1,v);
    }

    return;
}

vector<string> binarayNum(int n){
    vector<string> v;

    int zeros = 0, ones = 0;
    string op = "";

    solve(ones,zeros,op,n,v);

    return v;
}

int main()
{
    int n=5;

    vector<string> res = binarayNum(n); 
    
    for(auto& i : res) cout<<i<<endl;

    return 0;
}
// output:-
// for n = 3
// 111
// 110
// 101

// for n = 5
// 11111
// 11110
// 11101
// 11100
// 11011
// 11010
// 11001
// 10111
// 10110
// 10101