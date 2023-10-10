#include<bits/stdc++.h>
using namespace std;

pair<int,int> findMinMaxRec(int arr[], int n, int min, int max){
    if(n == 0 || n == 1) return {min,max};

    if(arr[0] >= 1 && arr[0] >= max) max = arr[0];
    if(arr[0] <= 0 && arr[0] <= min) min = arr[0];

    findMinMaxRec(arr+1, n-1, min, max);

}

int main()
{
    int arr[] = {1, 4, 45, 6, -50, 10, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int min=INT_MAX;
    int max=INT_MIN;
    pair<int,int> ans = findMinMaxRec(arr, n,min,max); 
    cout<<"min is: "<<ans.first<<endl;
    cout<<"max is: "<<ans.second<<endl;
    return 0;  
}