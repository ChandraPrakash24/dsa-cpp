#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int x=4;
    int n;   cin>>n;
    int arr[n];    for(auto& i : arr) cin>> i;

    for(auto& i : arr) 
    {
        if(i == x) {
            cout<<"found";
            return 0;
        }
        else if(i !=x) cout<<"not found"<<endl;
    }
    
}