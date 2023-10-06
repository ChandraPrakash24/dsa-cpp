#include<bits/stdc++.h>
using namespace std;

vector<int> allIndices(int arr[],int size,int tar,vector<int> outputArray,int initalIndex)
{
    if(initalIndex == size) return outputArray;

    if(arr[0] == tar){
        outputArray.push_back(initalIndex);
        return allIndices(arr+1,size,tar,outputArray,initalIndex+1);
    }else{
        return allIndices(arr+1,size,tar,outputArray,initalIndex+1);
    }
}
int main()
{
    vector<int> outputArray; 
    int size,tar; cin>>size>>tar; int arr[size]; for(auto& i : arr ) cin>>i;
    
    vector<int> ans = allIndices(arr,size,tar,outputArray,0);

    for(auto& i : ans) cout<<i;
    cout<<" size is: "<<ans.size();


    return 0;
}

// gpt approach

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> allIndices(int arr[], int size, int tar, int currentIndex) {
//     // Base case: If we reach the end of the array, return an empty vector
//     if (currentIndex == size) {
//         return vector<int>();
//     }

//     vector<int> outputArray = allIndices(arr, size, tar, currentIndex + 1);

//     // Check if the current element matches the target
//     if (arr[currentIndex] == tar) {
//         outputArray.push_back(currentIndex);
//     }

//     return outputArray;
// }

// int main() {
//     int size, tar;
//     cin >> size >> tar;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     vector<int> ans = allIndices(arr, size, tar, 0);

//     for (auto &i : ans) {
//         cout << i << " ";
//     }
    
//     cout << ans.size();

//     return 0;
// }


// gpt modyed my approach

/*
#include<bits/stdc++.h>
using namespace std;

vector<int> allIndices(int arr[], int size, int tar, vector<int> outputArray, int initialIndex)
{
    if (initialIndex == size) return outputArray;

    if (arr[initialIndex] == tar) {
        outputArray.push_back(initialIndex);
    }

    vector<int> result = allIndices(arr, size, tar, outputArray, initialIndex + 1);

    return result; // Return the result after each recursive call
}

int main()
{
    vector<int> outputArray; 
    int size, tar;
    cin >> size >> tar;
    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];
    
    vector<int> ans = allIndices(arr, size, tar, outputArray, 0);

    for (auto& i : ans) cout << i << " ";
    cout << ans.size();

    return 0;
}

 */