#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;

    int arr[n] = {}; // 3 2
    // int arr[n] = {1}; // 3 2
    // int arr[n] = {1, 0, 1, 0, 1}; // 3 2
    // int arr[n] = {0,1}; // 1 1
    // int arr[n] = {0,0,0,0,0,0}; 
    // int arr[n] = {0,0,1,1,1,0}; 
    // int arr[n] = {1,1,0,0,0,1}; 

    if (n == 0) {
        cout << "0" << endl; // No elements in the array
        return 0;
    }
    
    if (n == 1) {
        cout << "1" << endl; // Single element array, only one group
        return 0;
    }

    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0; i<n-1 ; i++) {

        if(arr[i] == 0 && arr[i+1] == 1){
            zeroCount++;
        }

        if(arr[i] == 1 && arr[i+1] == 0){
            oneCount++;
        }

    }  
    
    arr[n-1] == 1 ? oneCount++ : zeroCount++;

    cout<<"one count is "<<oneCount<<endl;
    cout<<"zero count is "<<zeroCount<<endl;

    cout<<min(oneCount,zeroCount);


    return 0;
}