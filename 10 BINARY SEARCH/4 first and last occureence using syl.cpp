#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0,0,0,0,1,1,1,1,1};

    int n = sizeof(arr)/sizeof(arr[0]); 
    


    // Find upper_bound and lower_bound
    auto upperBoundZero = upper_bound(arr, arr+n, 0);
    auto upperBoundOne = upper_bound(arr, arr+n, 1);
    auto lowerBoundZero = lower_bound(arr, arr+n, 0);
    auto lowerBoundOne = lower_bound(arr, arr+n, 1);

    // Print the indexes
    cout << "Upper bound of 0: " << upperBoundZero - arr << endl;
    cout << "Upper bound of 1: " << upperBoundOne - arr << endl;
    cout << "Lower bound of 0: " << lowerBoundZero - arr << endl;
    cout << "Lower bound of 1: " << lowerBoundOne - arr << endl;

    return 0;
}