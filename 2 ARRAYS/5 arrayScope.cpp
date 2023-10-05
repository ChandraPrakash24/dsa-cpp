#include<iostream>
using namespace std;

void update(int upp[], int s){
    upp[0] = 102;

    for(int i = 0; i<s ; i++){
        cout<<upp[i]<<" ";
    }
}

int main()
{
    cout<<"inside main function "<<endl;
    int arr[3] = {1,2,3};
    update(arr,3);


    cout<<"inside main function AGAIN"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    
    cout<<"out side main function"<<endl;

    return 0;
}