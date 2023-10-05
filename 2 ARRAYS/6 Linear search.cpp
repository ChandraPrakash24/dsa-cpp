#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return 0;   
}
int main()
{
    int arr[10] = {2,4,-6,7,8,9,2,3,0,11};
    int size = 10;
    int key;
    cout<<"eneter key: ";
    cin>>key;

    if (linearSearch(arr,10,key) == 0)
    {
        cout<<key<<" Not found"<<endl;
    } else
    cout<<"Found at index "<<linearSearch(arr,10,key)<<endl;

    return 0;
}