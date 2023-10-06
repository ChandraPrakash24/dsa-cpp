#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int size,int tar,int initalIndex){
    //base case
    if(initalIndex == size-1) return -1;

    //process
    if(arr[0] == tar ) return initalIndex;

    //call
    firstOcc(arr+1,size-1,tar,initalIndex+1);

}

int main()
{
    int n,tar; cin>>n>>tar; int arr[n]; for(auto& i : arr) cin>>i;
    cout<<firstOcc(arr,n,tar,0);    
    
    return 0;
}

//            WRONG

// #include<bits/stdc++.h>
// using namespace std;

// int firstOcc(int arr[],int size,int tar,int orignalSize){
//     if(size == 0 && arr[0] != tar) return -1;

//     firstOcc(arr+1,size-1,tar,orignalSize);

//     if(arr[0] == tar ) return orignalSize-size;

// }

// int main()
// {
//     int n,x; cin>>n>>x; int arr[n]; for(auto& i : arr) cin>>i;
//     int orignalSize=n;
//     cout<<firstOcc(arr,n,x,orignalSize);    
    


//     return 0;
// }