// Variable size sliding window
// TC : O (n)   SC : O (1)

#include<bits/stdc++.h>
using namespace std;

bool subarrWithSum(vector<int>& arr, int sum) {

    int res = 0, start = 0, end = 0;

    while (start <= end && end < arr.size()) {
        if (res <= sum) {
            res += arr[end++];
            cout << res << " ";
            if (res == sum) {
                cout << start << " <-> " << end - 1 << endl;
                return true;
            }
        }
        else {
            res -= arr[start++];
            if (res == sum) {
                cout << start << " <-> " << end - 1 << endl;
                return true;
            }
        }
    }

    return false;

}

int main()
{
    vector<int> v(6);
    v = { 1,4,20,3,10,5 };

    if (subarrWithSum(v, 26)) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}