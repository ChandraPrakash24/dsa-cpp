#include <bits/stdc++.h>
using namespace std;

int longestOnes(string str, int k) {
    int s = 0, max_length = 0, zero_count = 0; // Use size_t for s, max_length, zero_count

    for (int e = 0; e < str.length(); e++) { // Use size_t for e
        if (str[e] == '0') {
            zero_count++;
        }

        while (zero_count > k) {
            if (str[s] == '0') {
                zero_count--;
            }
            s++;
        }

        max_length = max(max_length, e - s + 1);
    }
    


    return max_length;
}

int main() {
    string str;
    getline(cin, str); // Read entire line including spaces

    int k;
    cin >> k;

    if (str.empty()) {
        cout << "empty string";
        return 0;
    }

    cout << longestOnes(str, k);

    return 0;
}
