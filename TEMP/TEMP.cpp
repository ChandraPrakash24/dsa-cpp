#include <iostream>
using namespace std;

bool strPalindrome(string s)
{

    if (((s.front()) != (s.back())) || s.empty() == 1)
    {
        return false;
    }

    if (s.length() <= 1)
    {
        return true;
    }

    s.erase(0, 1);
    s.pop_back();
    return strPalindrome(s);
}

int main()
{
    cout << strPalindrome("abcba");
    return 0;
}