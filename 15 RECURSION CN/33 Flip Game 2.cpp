#include <bits/stdc++.h>
using namespace std;

bool canNinjaWin(string& str) {
    // Base case: If there are no consecutive "$$", Ninja's friend wins.
    if (str.find("$$") == string::npos) {
        return false;
    }

    // Try all possible moves by flipping "$$" to "**".
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == '$' && str[i + 1] == '$') {
            string modified_str = str;
            modified_str[i] = '*';
            modified_str[i + 1] = '*';

            // If Ninja's friend loses with this move, Ninja wins.
            if (canNinjaWin(modified_str) == 0) {
                return true;
            }
        }
    }

    // If no winning move is found, Ninja's friend wins.
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;

        bool ninjaWins = canNinjaWin(str);
        cout << (ninjaWins ? "win" : "lose") << endl;
    }

    return 0;
}
