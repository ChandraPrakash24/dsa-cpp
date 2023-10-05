// #include<iostream>
// using namespace std;

// int getMax(int arr[], int s){
//     int max = INT_MIN;

//     for(int i = 0; i<s ; i++){
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int getMin(int arr[], int s){
//     int min = INT_MAX;
//     for(int i = 0 ; i<s; i++){
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }


// int main()
// {
//     int size;
//     cin>>size;

//     int num[100];
//     for(int i= 0 ; i<size; i++)
//     {
//         cin>>num[i];
//     }

//     cout<<"max is : "<<getMax(num,size) << endl;
//     cout<<"min is : "<<getMin(num,size);

//     return 0;

// }

#include<iostream>
using namespace std;

int getMax(int arr[], int s){
    int maxi = INT_MIN;

    for(int i = 0; i<s ; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int s){
    int mini = INT_MAX;
    for(int i = 0 ; i<s; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
}


int main()
{
    int size;
    cin>>size;

    int num[100];
    for(int i= 0 ; i<size; i++)
    {
        cin>>num[i];
    }

    cout<<"max is : "<<getMax(num,size) << endl;
    cout<<"min is : "<<getMin(num,size);

    return 0;

}