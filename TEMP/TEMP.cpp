#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Determine the size of the array

    for (int i = 0; i < n; i += 3) {
        cout << arr[i] << endl;
        for (int j = i + 1; j < n; j += 3) {
            cout << arr[j] << endl;
            for (int k = j + 1; k < n; k += 3) {
                cout << arr[k] << endl;
            }
        }
    }

    return 0;
}
