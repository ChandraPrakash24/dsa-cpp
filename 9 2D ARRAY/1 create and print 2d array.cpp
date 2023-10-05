#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int target, int rowSize, int colSize){
   for(int row=0; row<rowSize; row++){
        for (int col = 0; col < colSize; col++)
        {
            if( arr[row][col] == target) return true;
        }
        
   } return false;
}


int main()
{
    
    // initilization

    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    // takig input -> row wise

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin>>arr[row][col];
    //     }
    // }


    // OUTPUT
    // 1 2 3 4 5 6 7 8 9 10 11 12

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12

    // takig input -> row wise

    for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin>>arr[row][col];
        }
    }

    // OUTPUT
    // 1 2 3 4 5 6 7 8 9 10 11 12

    // 1 4 7 10
    // 2 5 8 11
    // 3 6 9 12 



    // print

    for(int row=0; row<3; row++){
        for(int col=0 ; col<4 ; col++){
            cout<< arr[row][col]<<" ";
        } cout<<endl;
    }

    // LINEAR SEARCH

    cout<<"Enter the element to be searched: "<<endl;
    int sKey;
    cin>>sKey;


    if(linearSearch(arr, sKey, 3,4)){
        cout<<"present"<<endl;
    } else{
        cout<<"Not Present"<<endl;
    }

    return 0;
}