#include<bits/stdc++.h>
using namespace std;

int ZeroOneKnapsack(vector<int> weight,vector<int> value,int index,int capacity, vector<vector<int>> dp){
    // base case
    if(index == 0){ // means we reaches the last elemnt traversing backword
        if(weight[index] <= capacity) return value[0]; // check remaning capacity
        else return 0;
    }

    // matlab kuch (value) to hai
    if(dp[index][capacity] != -1) return dp[index][capacity];

    int include=0;
    if(weight[index] <= capacity){
        include = value[index] + ZeroOneKnapsack(weight, value, index-1, capacity - weight[index],dp);
    }

    int notInclude = ZeroOneKnapsack(weight, value, index-1, capacity,dp);

    dp[index][capacity] = max(include, notInclude);
    return dp[index][capacity];

}  

int main()
{
    int n,capacity; cin>>n>>capacity;
    vector<int> weight(n), value(n);
    for(auto& i : weight) cin>>i; 
    for(auto& i : value)  cin>>i;

    //traverce backword (,,index-1,);
    // 1st step: dp array(-1)
    // step2 : store recursive call in dp
    // step3: base case ke bad if present return dpvalue
    // imp: imp two parameter or argument change that means you have to create 2D array or vector or DP
    vector<vector<int>> dp( n, vector<int> (capacity+1, -1) );
    cout<<ZeroOneKnapsack(weight,value,n-1,capacity,dp);   
    
    return 0;
}





//////////////////////////////// RECURSION //////////////////////////////////





// #include<bits/stdc++.h>
// using namespace std;

// int ZeroOneKnapsack(vector<int> weight,vector<int> value,int index,int capacity){
//     // base case
//     if(index == 0){ // means we reaches the last elemnt traversing backword
//         if(weight[index] <= capacity) return value[0]; // check remaning capacity
//         else return 0;
//     }

//     int include=0;
//     if(weight[index] <= capacity){
//         include = value[index] + ZeroOneKnapsack(weight, value, index-1, capacity - weight[index]);
//     }

//     int notInclude = ZeroOneKnapsack(weight, value, index-1, capacity);

//     int ans= max (include, notInclude);
//     return ans;

// }  

// int main()
// {
//     int n,capacity; cin>>n>>capacity;
//     vector<int> weight(n), value(n);
//     for(auto& i : weight) cin>>i; 
//     for(auto& i : value)  cin>>i;

//     //traverce backword (,,index-1,);
//     cout<<ZeroOneKnapsack(weight,value,n-1,capacity);   
    
//     return 0;
// }