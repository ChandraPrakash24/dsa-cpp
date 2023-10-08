#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    if (str.empty() || str.length() == 1) return str;

    return str.back() + reverseString(str.substr(1, str.length() - 2)) + str.front();
}

int main() {
    string input; getline(cin,input);
    string reversed = reverseString(input);

    cout << "Original string: " << input << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
