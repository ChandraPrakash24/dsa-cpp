#include<iostream>
using namespace std;

void printArr(int arr[], int s){
    for(int i=0 ; i< s ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    printArr(array,size);

    return 0;
}