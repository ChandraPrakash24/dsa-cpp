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