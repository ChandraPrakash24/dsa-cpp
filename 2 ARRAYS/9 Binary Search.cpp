#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int k){
    int start = 0;
    int end = s-1;

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == k){
            return mid;
        }

        if(k > arr[mid] ) {
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;

    }
    return -1;
}


int main()
{
    int even[8] = {2,3,5,7,9,10,15,20};
    int odd[8] = {22,23,25,27,29,32,36};

    cout<<"the value  is at index: "<<binarySearch(even,8,20)<<endl;
    cout<<"the value  is at index: "<<binarySearch(odd,7,22)<<endl;
    return 0;
}