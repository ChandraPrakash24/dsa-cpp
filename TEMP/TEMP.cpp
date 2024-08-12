this code is correct producing correct out put but i dot get the logic of "getSum(1, 1, res)":-
please dry run for this. (under the hood)


code:-

#include<bits/stdc++.h>
using namespace std;

vector<int> getPrefix(vector<int>& arr, int size) {
    vector<int> v(size, 0);

    int prefix = 0;

    for (int i = 0; i < size;i++) {
        v[i] = prefix + arr[i];
        prefix = v[i];
    }

    return v;
}

int getSum(int l, int r, vector<int>& sum) {
    return l == 0 ? sum[r] : sum[r] - sum[l - 1];
}

int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for (auto& i : arr) cin >> i;

    vector<int> res = getPrefix(arr, n);

    for (auto& i : res) cout << i << " ";

    cout << getSum(0, 0, res) << endl;
    cout << getSum(0, 1, res) << endl;
    cout << getSum(1, 1, res) << endl;
    cout << getSum(1, 3, res) << endl;
    cout << getSum(3, 6, res) << endl;


    return 0;
}

// OUTPUT:-

// 7
// 1 2 3 4 5 6 7
// 1 3 6 10 15 21 28
// 1
// 3
// 2
// 9
// 22