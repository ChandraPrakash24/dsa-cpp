// Alex works at a clothing store. There is a large pile of socks that must be paired by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are?

// For example: There are n=7 socks with colors arr= {1,2,1,2,1,3,2}. There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.

// Description: Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available. sockMerchant has the following parameter(s): 1. n: the number of socks in the pile 2. arr: the colors of each sock.

// Input:

// The 1’st line contains n integer and the no of sock represented in arr. The 2’nd line contains n space-separated integers which describes the colors arr[i] of the socks in the pile.

// Constraints:

// 1 <= n <= 100 1 <= arr[i] <= 100 & 0 <= i < n

// Output:

// Return the total no of matching pairs of socks that Allen can sell.

// Sample Input: 9 10 20 20 10 10 30 50 10 20 Output: 3

// Explanation:  Alex can match 3 pairs of socks i.e 10-10, 10-10, 20-20. While the left out socks are 50, 60, 20.

#include <bits/stdc++.h>
using namespace std;

int pairSocks(int array[], int n) {
    unordered_map<int, int> mp;
    int pair = 0;

    for(int i=0;i<n;i++) mp[array[i]]++;

    for(auto& i : mp) 
        pair += i.second / 2;

    return pair;
}

int main() {
    int n; cin >> n;  int arr[n];  for (auto& i : arr) cin >> i; 

    cout << pairSocks(arr, n);

    return 0;
}
