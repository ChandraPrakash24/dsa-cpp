#include<iostream>
using namespace std;

// void reverrseArray(int arr[],int s){
//     for (int i = 0; i < s; i+2)
//     {
//         int temp = 0;
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//         cout<<arr[i]<<endl;
//     }
    
// }
void print(int arr[], int s){
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

void reverrseArray(int arr[],int s){
    int start = 0;
    int end = s-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        cout<<"no of time swap ocure"<<endl<<endl;
    }
    print(arr,s);
}

int main()
{
    // int arr[5] = {1,2,3,4,5};
    // int size = 5;
    int arr[4] = {1,2,3,4};
    int size = 4;
  

    reverrseArray(arr,size);
    return 0;
}