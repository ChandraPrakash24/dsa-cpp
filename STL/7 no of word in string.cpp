#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;     getline(cin,s);
    map<char,int> mp;


    for(auto& c : s){
        if(c == ' '){
            continue;
        }


        mp[c]++;
    }

    for(auto& x : mp) cout<<x.first<<" "<<x.second<<endl;
    


    return 0;
}


// #include <iostream>
// #include <string>
// #include <cctype>
// #include <map>
// using namespace std;

// int main() {
    // string s;
    // getline(cin, s);
    // map<char, int> lowercase_mp, uppercase_mp;

    // for (auto& c : s) {
    //     if (c == ' ') {
    //         continue;
    //     }

    //     if (islower(c)) {
    //         lowercase_mp[c]++;
    //     } else if (isupper(c)) {
    //         uppercase_mp[c]++;
    //     }
    // }

    // cout << "Lowercase characters:\n";
    // for (auto& x : lowercase_mp) {
    //     cout << x.first << " " << x.second << endl;
    // }

    // cout << "Uppercase characters:\n";
    // for (auto& x : uppercase_mp) {
    //     cout << x.first << " " << x.second << endl;
    // }

//     return 0;
// }