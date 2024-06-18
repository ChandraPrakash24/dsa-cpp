#include<bits/stdc++.h>
using namespace std;


int getSecondLargestElIndex(int arr[], int n){

    if (n < 2) {
        cout << "Array size should be at least 2" << endl;
        return -1;
    }

    int large = 0, sl = -1;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[large]){ sl=large; large = i; }
        else if(arr[i] != arr[large]) {
            if (sl == -1 || arr[i] > arr[sl]) sl = i;
        }
    }
    cout<<sl;
    return sl;
}

int main()
{
    int arr[] = {5,20,12,20,10}; 
    // int arr[] = {10,10,10}; 
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    int sl = getSecondLargestElIndex(arr,arrSize);
    cout<<arr[sl]; // 12


    return 0;
}