/*
    Reverse array in groups
    Input: k = 3, arr= [1, 2, 3, 4, 5]
    Output: [3, 2, 1, 5, 4]
    Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.

    Input: k = 5, arr = [5, 6, 8, 9]
    Output: [9, 8, 6, 5]
    Explnation: Since k is greater than array size, the entire array is reversed.

    TC: O(n)
    SC: O(1) 

*/


class Solution {
public:
    void reverseInGroups(vector<long long int>& arr, int k) {
        int n = arr.size();
        for (int i = 0; i < n; i = i + k) {
            int l = i, r = i + k - 1;
            if (i + k > n) {
                r = n - 1;
                while (l <= r) {
                    swap(arr[r--], arr[l++]);
                }
                return;
            }
            while (l <= r) {
                swap(arr[r--], arr[l++]);
            }
        }
    }
};
