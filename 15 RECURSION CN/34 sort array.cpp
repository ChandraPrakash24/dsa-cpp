#include <iostream>
#include <vector>

using namespace std;

void insertElement(vector<int> &arr, int element) {
    // Base case: if array is empty or last element is less than or equal to element, insert element at the end
    if (arr.empty() || arr[arr.size() - 1] <= element) {
        arr.push_back(element);
        return;
    }

    // Hypothesis: Sort the array excluding the last element
    int last = arr.back();
    arr.pop_back();
    insertElement(arr, element);

    // Induction: Restore the last element and insert it into the correct position
    arr.push_back(last);
}

void sort(vector<int> &arr) {
    // Base case: if array has only one element or is empty, it's already sorted
    if (arr.size() <= 1)
        return;

    // Hypothesis: Sort the array excluding the last element
    int last = arr.back();
    arr.pop_back();
    sort(arr);

    // Induction: Insert the last element into the sorted array
    insertElement(arr, last);
}

int main() {
    vector<int> arr = {5, 2, 4, 3, 1};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    sort(arr);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
