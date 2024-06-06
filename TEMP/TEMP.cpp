#include<bits/stdc++.h>
using namespace std;

void pairSum(int arr[],int size=5){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout<<arr[i]<<" , "<<arr[j]<<" sum is: "<<arr[i]+arr[j]<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5}; 
    
    pairSum(arr);

    return 0;
}