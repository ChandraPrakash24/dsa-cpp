#include<iostream>
using namespace std;

int main()
{
    int n,pos,val;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Here is the elemnt of array you have entered: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    cout<<"eneter the position and value to be enetered in exeesting array: "<<endl;
    n = n+1; 

    cin>>pos>>val; 

    for (int i = n; i >= pos; i--)
    {
        arr[i+1]=arr[i];
    }
    
    arr[pos]=val;

    cout<<"Here is the new elemnt of array you have entered: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}


// //INSERT ELEMENT AT FIRST POSITION

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,pos,val;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Here is the elemnt of array you have entered: "<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     cout<<"eneter the value to be enetered at the first position of the array: "<<endl;
//     n = n+1; 

//     cin>>val; 

//     for (int i = n; i >= 0; i--) //trick
//     {
//         arr[i+1]=arr[i];
//     }
    
//     arr[0]=val;

//     cout<<"Here is the new elemnt of array you have entered: "<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


//INSERT ELEMENT AT LAST POSITION

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,pos,val;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Here is the elemnt of array you have entered: "<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     cout<<"Enter element you want to insert in Last Position";
//     cin>>val;
//     arr[n] = val;
//     n = n+1 ; //trick

//     cout<<"Here is the new elemnt of array you have entered: "<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }