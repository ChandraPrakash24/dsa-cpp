#include<iostream>
using namespace std;

void print(int arr[],int s,int e){

    for (int i = s ; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    
}

int binarySearch(int arr[],int s,int e,int key){

    print(arr,s,e);

    if (s>e)
    {
        cout<<"Element not Found"<<endl;
        return 0;
    }

    int mid = s+ (e-s)/2;
    cout<<"mid is : "<<mid<<endl;

    if (arr[mid]==key)
    {
        cout<<"found at index :"<<arr[mid]<<endl;
        // return mid;
    }
   

    if (arr[mid] < key)
    {
        return binarySearch(arr,mid+1,e,key);
        // return mid;
    }else{
        return binarySearch(arr,s,mid-1,key);
        // return mid;
    }
}

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    binarySearch(arr,0,size-1,9);
   
    return 0;
}