#include<bits/stdc++.h>
using namespace std;

bool subarrWithSum(vector<int>& arr, int sum) {
    static int curWin = 1;
    if (curWin > arr.size()) return false;

    int currSum = 0;
    for (int i = 0; i < curWin; i++) currSum += arr[i];

    if (currSum == sum) return true;


    for (int i = curWin; i < arr.size(); i++) {
        currSum = currSum + arr[i] - arr[i - curWin];
        if (currSum == sum) return true;
    }

    curWin++;

    subarrWithSum(arr, sum);

}

int main()
{
    // int n; cin>>n;
    vector<int> v(2);
    v = {2,4};

    if (subarrWithSum(v, 4)) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}