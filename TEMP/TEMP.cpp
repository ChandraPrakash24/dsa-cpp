// Sliding Window Technique
// TC : O(n)   SC : O (1) 

#include<bits/stdc++.h>
using namespace std;

int slidingWondowSumOfKEl(vector<int>& v, int k) {

    // Edge case: window size is greater than array size or invalid
    if (k <= 0 || v.size() < k) {
        cout << "Invalid window size" << endl;
        // cerr << "Invalid window size" << endl;
        return -1; // or handle error appropriately
    }

    int currSum = 0;
    for (int i = 0; i < k; i++) currSum += v[i];

    int res = currSum;

    for (int i = k; i < v.size(); i++) { // i taping last element in next iteration
        currSum = currSum + v[i] - v[i - k];
        res = max(currSum, res);
    }

    return res;
}

int main()
{
    int n = 6;
    vector<int> v(n);
    v = { 1, 8, 30, -5, 20, 7 }; // 53
    int k = 4;

    int result = slidingWondowSumOfKEl(v, k);

    if (result != -1) {
        cout << result << endl;
    }

    return 0;
}