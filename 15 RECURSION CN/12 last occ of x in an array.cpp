#include<bits/stdc++.h>
using namespace std;

int lastOccurene(int arr[],int size,int x,int currentIndex){
    // base case
    if(currentIndex == -1) return -1;

    //process
    if(arr[currentIndex] == x) return currentIndex;

    //call
    return lastOccurene(arr,size,x,currentIndex-1);
}

int main()
{
    // x is target element
    int size,x;

    cout<<"Enter the size of Array: "<<endl; cin>>size; 
    int arr[size];
    cout<<"Enter array elemnts: "<<endl;
    for(auto& i : arr) cin>>i;

    cout<<"Enter the target element: "<<endl; cin>>x;

    int ans = lastOccurene(arr,size,x,size-1);
    
    if(ans != -1) cout<<"Last Occurence of "<<x<<" is at index "<<ans<<endl;
    else cout<<x<<" is not present in given array."<<endl;


    return 0;
}