#include<bits/stdc++.h>
using namespace std;

int findPivout(int arr[],int si,int ei){
    int count=0;
    for(int i=si+1;i<=ei;i++) {
        if(arr[i] <= arr[si]) count++;
    } swap(arr[si],arr[si + count]);

    int i=si;
    int j=si + count;
    while(i <= si + count && j<= ei){
        if(arr[i] <= arr[si + count]) i++;
        else if(arr[j] > arr[si + count]) j++;
        else(swap(arr[i++],arr[j++]));
    }
    return si+count;
}

void quickSort(int arr[], int si, int ei){
    if(si >= ei) return;

    int pivout = findPivout(arr,si,ei);
    quickSort(arr,si,pivout-1);
    quickSort(arr,pivout+1,ei);
}

int main()
{
    int arr[6] = {6,5,4,3,2,1};
    quickSort(arr,0,5);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}