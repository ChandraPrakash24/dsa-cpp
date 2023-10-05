// decending vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {35, 30, 25, 20, 15, 10};
    int target = 15;

    if (binary_search(v.begin(), v.end(), target, greater<int>()))
    {
        cout << target << " exists in the vector";
    }
    else
    {
        cout << target << " does not exist in the vector";
    }

    return 0;
}

// // accending vecor

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {10, 15, 20, 25, 30, 35};

//     if (binary_search(v.begin(), v.end(), 15))
//         cout << "23 exists in vector";
//     else
//         cout << "23 does not exist";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tar;
//     cin >> tar;
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v)
//         cin >> i;
//     sort(v.begin(), v.end(), greater<int>());
//     unsigned int l = 0, r = v.size() - 1;

//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] == tar)
//         {
//             cout << mid;
//             return 0;
//         }
//         else if (v[mid] < tar)
//             r = mid - 1;
//         else
//             l = mid + 1;
//     }

//     cout << "Not found";
//     return 0;
// }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
// //     int tar;   cin>>tar;
// //     sort(arr, arr + n, greater<int>());
// //     int l=0,r=n-1;

// //     while(l<=r){
// //         int mid = l + (r-l) / 2;
// //         if(arr[mid] == tar) {cout<<mid;  return 0; }
// //         else if(arr[mid] < tar) r = mid -1;
// //         else l = mid +1;
// //     }

// // // 10 9 8 7 6 5 4 3 2 1
// //     cout<<"Not Found";
// //     return 0;
// // }