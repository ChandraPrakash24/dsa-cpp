#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {-2,-4,2,-6,1};
    int size = 5;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum is : "<<sum<<endl;
    return 0;
}