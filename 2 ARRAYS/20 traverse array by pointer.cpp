// C++ Program to implement the
// use of pointer with array
#include <iostream>

using namespace std;

int main()
{
	int arr[5] = { 6, 2, 5, 7, 4 };
	// int arr[5] = { 6, 2, 5, 7, 4 };

	// We can use arr or &arr[0] as both will give the
	// address of first element of the array. int *ptr =
	// arr;
	int* ptr = arr;
	// int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		// cout << "Value of" << i << " arr[" << i << "] is "
		// 	<< *(ptr + i) << endl;
		// cout << "Address of " << *(ptr + i) << " is "
		// 	<< ptr + i << endl
		// 	<< endl;

        // cout<<*(ptr)<<endl;
        // cout<<(ptr)<<endl;
        cout<<*(ptr)<<endl;
        cout<<(ptr)<<endl;
        ptr++;
	}
	return 0;
}
