#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;
    int n = 7;

    k = k % n;
    cout << k << endl;

    // rotate to Right
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    // rotate to left
    // reverse(arr.begin(),arr.begin()+(n-k));
    // reverse(arr.begin()+(n-k),arr.end());
    reverse(arr.begin(), arr.end());


    for (auto& i : arr) cout << i << " ";

    return 0;
}