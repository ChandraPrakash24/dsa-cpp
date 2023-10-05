#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (auto& i : arr)
        cin >> i;

    for (int i = 0; i < n - 2; i++) {
        if (arr[i] < arr[i + 2]) {
            swap(arr[i], arr[i + 2]);
        }
    }

    for (const auto& i : arr)
        cout << i << " ";

    return 0;               
}