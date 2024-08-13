#include<bits/stdc++.h>
using namespace std;

bool isThreePartision(vector<int>& arr, int n) {
    int sum = 0;
    for (auto& i : arr) sum += i;

    if ((sum % 3) != 0) return false; // if sum is not divisible by 3 then return false

    int tragetSum = sum / 3;
    int currentSum = 0;
    int partisionCount = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum == tragetSum) {
            partisionCount++;
            currentSum = 0;
        }
        if (partisionCount == 2) return true;
    }

    return false;
}

int main()
{
    vector<int> arr(8);
    // arr = { 5,2,6,1,1,1,1,4 }; // 1
    arr = { 5,2,6,1,1,1,1,5 }; // 0

    cout << isThreePartision(arr, 8);

    return 0;
}