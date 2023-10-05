#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {1,2,3,4,5};
    int n=5,pos;
    
    cout<<"Enter the position to delete its elemnt:"<<endl;
    cin>>pos;

    for (int i = pos; i < n-1; i++)
    {
       arr[i]=arr[i+1];
    }

    cout<<"New array after deletion is: "<<endl;
    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

//DELETION AT FIRST ELEMENT

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]= {1,2,3,4,5};
//     int n=5;
    
//     cout<<"new array after deletion of element at first position: "<<endl;
   

//     for (int i = 0; i < n-1; i++)
//     {
//        arr[i]=arr[i+1];
//     }

    
//     for (int i = 0; i < n-1; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }

// DELETION AT LAST ELEMET

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]= {1,2,3,4,5};
//     int n=5;
    
//     cout<<"new array after deletion of element at first position: "<<endl;
   

//     for (int i = n; i < n-1; i++)
//     {
//        arr[i]=arr[i+1];
//     }

    
//     for (int i = 0; i < n-1; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }