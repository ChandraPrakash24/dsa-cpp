#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    //base case
    if (size <= 0)
    {
        return 0;
    }

    // return sumOfArray(arr, size - 1 ) + arr[size -1];
    //                   OR 
    int sum = arr[0] + sumOfArray(arr + 1,size - 1);
    return sum;
}

int main()
{
    int arr[5] = {3,2,5,1,6};
    int size = 5;

    int ans = sumOfArray(arr,size);
    cout<<ans<<endl;

    return 0;
}