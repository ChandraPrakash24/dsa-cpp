#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;

    for(auto &c : s){
        
        if(c == '(') st.push(')');
        else if(c == ']') st.push(']');
        else if(c == '}') st.push('}');

        if(c == ')' || c == ']' || c == '}'){
            if(st.empty() || st.top() != c) return false;
            st.pop();
        }
    }

    return st.empty(); 
}

int main()
{
    string s; cin>>s;

    cout<<isValid(s);


    return 0;
}



// #include <iostream>
// #include <stack>
// #include <unordered_map>
// using namespace std;

// bool isValid(string s) {
//     // Create a map that defines the opening and closing brackets
//     const unordered_map<char, char> bracketMap = {
//         {'(', ')'},
//         {'[', ']'},
//         {'{', '}'}
//     };

//     // Create a stack to store the opening brackets
//     stack<char> st;
//     for (char c : s) {
//         // If the character is an opening bracket, push it onto the stack
//         if (bracketMap.find(c) != bracketMap.end()) {
//             st.push(c);
//         } 
//         // If the character is a closing bracket and the stack is not empty, check if it matches the top element of the stack
//         else if (!st.empty() && bracketMap[st.top()] == c) {
//             st.pop();
//         } 
//         // If none of the above conditions are met, the string is not valid
//         else {
//             return false;
//         }
//     }

//     // If the stack is empty by the end, we have a valid string
//     return st.empty();
// }

// int main() {
//     // Read input string from the user
//     string s;
//     cin >> s;

//     // Check if the string is valid and print the result
//     cout << isValid(s);

//     return 0;
// }