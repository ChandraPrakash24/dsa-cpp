#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"size of array is : "<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    
}

bool linearSearch(int arr[],int size, int key){

    print(arr,size);

    if (size <= 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    { 
       return linearSearch(arr + 1, size - 1,key);
    }
}   

int main()
{
    int arr[5]= {1,2,3,4,5};
    int size = 5;

    int key;
    cin>>key;

    // cout<<linearSearch(arr,size,key)<<endl;
    if (linearSearch(arr,size,key))
    {
        cout<<"element found"<<endl;
    }else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}