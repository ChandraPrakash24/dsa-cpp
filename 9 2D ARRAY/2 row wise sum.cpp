#include<iostream>
using namespace std;

int printsum(int arr[][4], int n, int m){

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
            
        }
        
        if(temp < sum) temp = sum;
        cout<<sum<<endl;
    }
    cout<<"largest row sum is : "<<temp<<endl;
    return 0;

}


int main()
{
    int arr[3][4] = { 1, 4 ,6 , 6,7,9,1,23,1,2,22,16};

    printsum(arr,3,4);
    return 0;
}