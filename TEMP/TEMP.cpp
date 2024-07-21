// maximum length even odd
// TC: O(n)   SC: O(1)
// Kaden's algoritham

#include<bits/stdc++.h>
using namespace std;

int maximumLengthEvenOdd(int* a, int n){

    int curr = 1, res = 1; // including first element
    
    for(int i=1;i<n;i++){
        if((a[i] % 2 == 0 && a[i-1] % 2 != 0) || (a[i] % 2 != 0 && a[i-1] % 2 == 0)){
            curr++;
            res = max(curr,res);
        }else{
            curr = 1;
        }
    }
    return res;
}


int main()
{
    int arr[] = {5,10,20,6,3,8};
    int n = 6;

    cout<<maximumLengthEvenOdd(arr,n); // 3

    return 0;
}
