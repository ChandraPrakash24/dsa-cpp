#include<iostream>
using namespace std;

int findLeaders(int * arr, int n){

    if(n == 0 || n==1) return -1;

    int previousLeader = n-1, currentLeader= n-2, index=n-2;
    while(currentLeader>= 0){
        if(arr[previousLeader]<arr[currentLeader]){
            arr[index] = arr[currentLeader];
            index--;
            previousLeader=currentLeader;
        }
        currentLeader--;
    }
    return index;
}

 
int main()
{
    int arr[] ={20,30,7,10,4,10,6,5,2}; // 30 10 6 5 2
    int n = 9; 
    // int arr[] ={10,11}; // 11
    // int n =2; 
    // int arr[] ={11,10}; // 11 10
    // int n =2; 
    // int arr[] ={11}; // 11
    // int n = 1; 
    // int arr[] ={10, 20, 20, 5}; // 20 5
    // int n = 4; 
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

    return 0;
}