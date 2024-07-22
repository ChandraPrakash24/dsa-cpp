#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 10, 2, 3, 99, 12, 0 };
    int n = 6;

    for(int i=0;i<n;i++){
        for(int j=i; j<n;j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    } 
    
    return 0;
}

/*
10
10 2
10 2 3
10 2 3 99
10 2 3 99 12
10 2 3 99 12 0
2
2 3
2 3 99
2 3 99 12
2 3 99 12 0
3
3 99
3 99 12
3 99 12 0
99
99 12
99 12 0
12
12 0
0
 */