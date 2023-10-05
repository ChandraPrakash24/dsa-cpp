#include<iostream>
using namespace std;

int main()
{
    int n,skey;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element whose index is to be search"<<endl;
    cin>>skey;

    for (int i = 0; i < n; i++)
    {
        if (skey == arr[i])
        {
            cout<<skey<<" found at index "<<i;
        }
        
    }
    return 0;
}