#include<bits/stdc++.h>
using namespace std;

int deleteAt(int arr[], int& current_size, int capacity, int position){

    cout<<"Current capicity is: "<<current_size<<endl;
    if(position > current_size || position > capacity || position == 0) return -1;
    
    for(int i=position-1; i<current_size; i++){
        arr[i] = arr[i+1];
    }

    cout<<"Now current capicity is: "<<--current_size<<endl;

    for(int i=0; i<current_size; i++) cout<<arr[i]<<" ";
    
    cout<<endl;

    return current_size;

}

int main(){

    int arr[5] = {3,8,12,5,6};  
    int current_size = 5;
    cout<<deleteAt(arr,current_size,5,1);
    cout<<deleteAt(arr,current_size,5,4);

    return 0;
}