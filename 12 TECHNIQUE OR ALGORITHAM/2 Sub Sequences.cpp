// TC: O( 2^n * n)    //  S: O(n)


// // ORDER SAME
// // MAY BE CONTIGOUS , MAY BE NOT
// // size can be 0

// #include<bits/stdc++.h>
// using namespace std;

// void subsiquence(unsigned int i, vector<int>& arr, vector<int>& ans){
//     //base case
//     if(i >= arr.size()){
//         for(auto& i : ans) cout<<i<<" ";
//         // if(ans.size() == 0) cout<<"{ }";  // OPTIONAL
//         cout<<endl;
//         return;
//     }
//     // all value pick
//     ans.push_back(arr[i]);
//     subsiquence(i+1,arr,ans);
//     // not pick current element
//     ans.pop_back();
//     subsiquence(i+1,arr,ans);
// }


// int main()
// {
//      int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i;
//     vector<int> ans;
//     unsigned int index=0;

//     subsiquence(index,v,ans);

//     return 0;
// }



// OUTPUT

// 3
// 3 1 2
//
//
// 3 1 2
// 3 1
// 3 2
// 3
// 1 2
// 1
// 2
// {}


#include<bits/stdc++.h>
using namespace std;

void subsiquence(unsigned int i, string &arr, vector<char>& ans){
    //base case
    if(i >= arr.size()){
        for(auto& i : ans) cout<<i<<" ";
        // if(ans.size() == 0) cout<<"{ }";  // OPTIONAL
        cout<<endl;
        return;
    }
    // all value pick
    ans.push_back(arr[i]);
    subsiquence(i+1,arr,ans);
    // not pick current element
    ans.pop_back();
    subsiquence(i+1,arr,ans);
}


int main()
{
    string c; getline(cin,c);
    vector<char> ans;
    unsigned int index=0;

    subsiquence(index,c,ans);

    return 0;
}


// OUTPUT

// abc
//
// a b c
// a b
// a c
// a
// b c
// b
// c
// {}