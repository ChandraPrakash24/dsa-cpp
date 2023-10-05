#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;

    for (auto& c : s) {
        if(c == '(' || c == '[' || c == '{') cnt++;
        else cnt--;
    }

    cnt == 0 ? cout << "true" : cout << "false";

    // return 0;
}





