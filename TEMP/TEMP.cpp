#include<bits/stdc++.h>
using namespace std;

bool isEquiPoint(vector<int>& arr, int n) {

    int rightSum = 0;

    for (int i = 0; i < n;i++) {
        rightSum += arr[i]; // calculating prefix sum
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        rightSum -= arr[i]; // removing current place element
        if (leftSum == rightSum) return true;
        leftSum += arr[i]; // adding current standing elemnet to left sum
    }
    return false;
}

int main()
{
    vector<int> arr(6);
    arr = { 3,4,8,-9,9,7 }; // Yes
    // arr = { 3,4,8,-9,9,77 }; // No

    cout << isEquiPoint(arr, 6);

    return 0;
}