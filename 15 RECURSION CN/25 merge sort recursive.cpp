#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int si,int ei){
	int size = ei - si + 1;
	int mid = si + (ei - si) / 2;
	int *out = new int[size];

	int i = si;
	int j = mid+1;
	int k = 0;

	while(i <= mid && j<= ei){
		if(arr[i] < arr[j]) out[k++] = arr[i++];
		if(arr[j] < arr[i]) out[k++] = arr[j++];
	}

	while(i<=mid) out[k++] = arr[i++];
	while(j<=ei)  out[k++] = arr[j++];

	int m = 0;
    for (int i = si; i <= ei; i++) arr[i] = out[m++];

	delete[] out;
}

void mergeSort(int arr[], int si, int ei){

	if(si >= ei) return;

	int mid = si + (ei - si) / 2;
	mergeSort(arr, si, mid);
	mergeSort(arr, mid+1, ei);

	merge(arr,si,ei);
}

int main()
{
	int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;
	// int n = sizeof(arr) / sizeof(arr[0]); 
	mergeSort(arr,0,n-1);

	for(auto& i : arr) cout<<i<<" ";

	return 0;
}


// OUTPUT
// 5
// 56 -25 0 1 100
// -25 0 1 56 100