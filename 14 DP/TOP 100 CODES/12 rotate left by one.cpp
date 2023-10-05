#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int array[], int size){
    int first = array[0];
    for(int i=0; i<= size; i++) array[i] = array[i+1];
    array[size] = first;
}

int main(){
    int n; cin>>n; int arr[n]; for(int& i : arr) cin>>i;
    // if rotate no of thims let say 'k' times
    int k; cin>>k;
    while(k--) rotateLeft(arr, n-1);
    cout<<"   <--"<<endl;
    for(int& i : arr) cout<<i<<" ";
} 