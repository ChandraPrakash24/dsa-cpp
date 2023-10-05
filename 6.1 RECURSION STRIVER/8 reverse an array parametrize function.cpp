// // Recursive C++ program to reverse an array
// #include <bits/stdc++.h>
// using namespace std;

// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
// 	if (start >= end)
// 	return;
	
// 	int temp = arr[start];
// 	arr[start] = arr[end];
// 	arr[end] = temp;
	
// 	// Recursive Function calling
// 	rvereseArray(arr, start + 1, end - 1);
// }	


// /* Utility function to print an array */
// void printArray(int arr[], int size)
// {
// for (int i = 0; i < size; i++)
// cout << arr[i] << " ";

// cout << endl;
// }

// /* Driver function to test above functions */
// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6};
	
// 	// To print original array
// 	printArray(arr, 6);
	
// 	// Function calling
// 	rvereseArray(arr, 0, 5);
	
// 	cout << "Reversed array is" << endl;
	
// 	// To print the Reversed array
// 	printArray(arr, 6);
	
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i,int n)
{
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	reverse(arr,i+1,n);
}

int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	reverse(arr,0,n);
	for(int i=0;i<n;i++) cout<<arr[i];
	return 0;
}