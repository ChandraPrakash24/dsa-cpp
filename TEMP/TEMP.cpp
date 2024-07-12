
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr,int index, int k){
    if(arr.size() == 1) return arr[0];

    index = (index+k) % arr.size();

    arr.erase(arr.begin() + index);

    for(auto& i : arr) cout<<i<<" ";
    cout<<endl;


    return solve(arr,index, k);

}

int josephusProblem(int n, int k){

    vector<int> arr(n);

    for(int i=1;i<=n;i++) arr[i-1] = i;

    k--;

    int index=0;

    cout<<"size: "<<arr.size()<<endl;;

    for(auto& i : arr) cout<<i<<endl;

    cout<<"k is : "<<k<<endl;
    
    return solve(arr,index,k);
}

int main()
{

    // cout<<josephusProblem(5,2); // 3
    cout<<josephusProblem(5,3); // 4

    
    return 0;
}