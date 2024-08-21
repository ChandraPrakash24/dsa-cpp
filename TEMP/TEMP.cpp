// Print all Leaders
// TC: O(n) SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {30, 10, 10, 5};
    int n = 4;

    int prevLeader = arr[n - 1];
    int k = n - 2;
    for (int i = n - 2;i >= 0; --i) {
        if (arr[i] >= arr[i + 1] && arr[i] >= prevLeader) {
            prevLeader = arr[i];
            arr[k--] = arr[i];
        }
    }

    for(int j=k+1; j<n; j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}