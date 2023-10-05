#include<iostream>
using namespace std;

bool isArraySorted(int arr[], int size){
    //base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaningPart = isArraySorted(arr + 1, size -1);
        return remaningPart;
    }
}

int main()
{
    int arr[5] = {1,2,7,7,7};
    int size = 5;

    bool ans = isArraySorted(arr,size);

    if (ans)
    {
        cout<<"Array is Sorted"<<endl;
    } else
    cout<<"Array is Unsorted"<<endl;

    return 0;
}