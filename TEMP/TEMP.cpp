#include<bits/stdc++.h>
using namespace std;

int insertElementAt(int arr[], int& current_size, int capacity, int position, int element){

    cout<<"Current capicity is: "<<current_size<<endl;
    if(current_size == capacity) return -1;

    // int pos = position-1;

    for(int i=current_size-1; i>=position-1; i--){
        arr[i+1] = arr[i];
    }

    arr[position-1] = element;
    current_size++;
    cout<<"Now current capicity ios: "<<current_size<<endl;

    for(int i=0; i<current_size; i++) cout<<arr[i]<<" ";

    cout<<endl;

    return current_size;

}

int main(){
    int arr[5] = {20,5,7};  
    int current_size = 3;
    cout<<insertElementAt(arr,current_size,5,2,11);
    cout<<insertElementAt(arr,current_size,5,5,64);
    cout<<insertElementAt(arr,current_size,5,3,22);

    return 0;
}