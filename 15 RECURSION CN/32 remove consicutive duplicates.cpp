#include <iostream>
using namespace std;

string removeDuplicate(string s)
{
    // Base case: If the string has only one character, return it.
    if (s.length() == 1) {
        return s;
    }

    // Check if the first character is the same as the second character.
    if (s[0] == s[1]) {
        // Remove the first character and call the function recursively on the modified string.
        return removeDuplicate(s.substr(1));
    } else {
        // If they are different, keep the first character and call the function recursively on the rest of the string.
        return s[0] + removeDuplicate(s.substr(1));
    }
}

int main() {
    int T; // Number of test cases
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n; // Length of the string
        cin >> n;
        string input;
        cin >> input;

        string result = removeDuplicate(input);
        cout <<"OUTPUT: "<< result << endl;
    }

    return 0;
}
