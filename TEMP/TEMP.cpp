#include<bits/stdc++.h>
using namespace std;

// void solve(vector<int> arr, int sum, int curr_sum, int& count) {
//     if (sum == 0) { count = 1; return; }
//     if (arr.empty()) {
//         if (curr_sum == sum) {
//             count += 1;
//         } 
//         return; 
//     }

//     int el = arr[0];
//     int curr_sum1 = curr_sum;
//     int curr_sum2 = curr_sum;
//     curr_sum2 = curr_sum2 + el;
//     arr.erase(arr.begin());
//     solve(arr, sum, curr_sum1, count);
//     solve(arr, sum, curr_sum2, count);
//     return;
// }


int solve(vector<int> arr, int sum, int curr_sum, int count) {
    if (sum == 0) { return 1; }
    if (arr.empty()) {
        if (curr_sum == sum) {
            count += 1;
        } 
        return count; 
    }

    int el = arr[0];
    int curr_sum1 = curr_sum;
    int curr_sum2 = curr_sum;
    curr_sum2 = curr_sum2 + el;
    arr.erase(arr.begin());
    int count1 =  solve(arr, sum, curr_sum1, count);
    int count2 =  solve(arr, sum, curr_sum2, count);
    return count1 + count2;
}


int subsetSum(vector<int> arr, int sum){

    int count = 0, curr_sum = 0;

    return solve(arr, sum, curr_sum, count);

}

int main()
{
    vector<int> arr = {10,5,2,3,6}; // 2
    int sum = 8;
    // vector<int> arr = {1,2,3}; // 1
    // int sum = 4;
    // vector<int> arr = {10,20,15}; // 0
    // int sum = 37;
    // vector<int> arr = {10,20,30}; // 1
    // int sum = 60;
    // vector<int> arr = {10,20,30}; // 1 {empty array}
    // int sum = 0;

    cout<<subsetSum(arr,sum); 

    return 0;
}