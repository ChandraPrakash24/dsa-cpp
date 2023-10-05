#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void swapAlternate(int arr[], int n){

    for (int i = 0; i < n; i+=2)
    {
        if (i+1< n)
        {
            swap(arr[i],arr[i+1]);
            //           OR
            // int temp = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = temp;
        }
    }
}


int main()
{
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};

    swapAlternate(even, 8);
    print(even,8);

    cout<<endl;

    swapAlternate(odd, 5);
    print(odd,5);
    return 0;
}