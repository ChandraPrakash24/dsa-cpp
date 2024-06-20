#include<bits/stdc++.h>
using namespace std;

int findLeaders(int * arr, int n){
    // cout<<arr[n-1]<<" ";
    int pl = n-1, cl= n-2, index=n-2;
    while(cl>= 0){
        // cout<<"first :"<<cl<<endl;
        if(arr[pl]<arr[cl]){
            // cout<<arr[cl]<<" ";
            // swap(arr[cl],arr[index--]);
            arr[index] = arr[cl];
            index--;
            pl=cl;
        }
        cl--;
        // cout<<"second :"<<cl<<endl;
    }
    // cout<<"i : "<<index<<endl;
    return index;
}

 
int main()
{
    int arr[] ={20,30,7,10,4,10,6,5,2}; // 30 10 6 5 2
    int n = 9; 
    // int arr[] ={7,10,4,10,6,5,2}; // 10 6 5 2
    // int n = 7;
    // int arr[] ={10,20,30}; // 30
    // int n = 3;
    // int arr[] ={30,20,10}; // 30 20 10
    // int n = 3;
    // int arr[] ={1,1,1}; // 1
    // int n = 3;


    int index = findLeaders(arr,n);
    
    for(int j=index+1;j<n;j++){
        cout<<arr[j]<<" ";
    }


    cout<<endl;

    // for(auto& i : arr) cout<<i<<" ";
    return 0;
}