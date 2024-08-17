#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
#include <cmath> // For std::floor

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    int sum = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    // Calculate mean and floor it
    double mean = static_cast<double>(sum) / N;
    int floored_mean = static_cast<int>(floor(mean));
    
    // Sort the array
    sort(a.begin(), a.end());
    
    // Calculate median
    int median;
    if (N % 2 == 1) {
        // Odd number of elements
        median = a[N / 2];
    } else {
        // Even number of elements
        int mid1 = a[N / 2 - 1];
        int mid2 = a[N / 2];
        median = static_cast<int>(floor((mid1 + mid2) / 2.0));
    }
    
    // Output mean and median
    cout << floored_mean << " " << median << endl;
    
    return 0;
}

/*
    Input:
    N = 4
    a[] = {2, 8, 3, 4}
    Output: 4 3
 */