#include <iostream>
using namespace std;

int findFirstOccurrenceOfZero(int arr[], int n) {
    int l = 0, r = n - 1;

    int FirstOccurrenceOfZero = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == 0) {
            FirstOccurrenceOfZero = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return FirstOccurrenceOfZero;
}

int findLastOccurrenceOfZero(int arr[], int n) {
    int l = 0, r = n - 1;

    int LastOccurrenceOfZero = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == 0) {
            LastOccurrenceOfZero = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return LastOccurrenceOfZero;
}

int findFirstOccurrenceOfOne(int arr[], int n) {
    int l = 0, r = n - 1;

    int FirstOccurrenceOfOne = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == 1) {
            FirstOccurrenceOfOne = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return FirstOccurrenceOfOne;
}

int findLastOccurrenceOfOne(int arr[], int n) {
    int l = 0, r = n - 1;

    int LastOccurrenceOfOne = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == 1) {
            LastOccurrenceOfOne = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return LastOccurrenceOfOne;
}

int main() {
    int arr[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int firstOccurrenceOfZero = findFirstOccurrenceOfZero(arr, n);
    int lastOccurrenceOfZero = findLastOccurrenceOfZero(arr, n);

    if (firstOccurrenceOfZero == -1 || lastOccurrenceOfZero == -1) {
        cout << "0 Not found";
    } else {
        cout << "First of zero is at : " << firstOccurrenceOfZero << endl;
        cout << "Last of zero is at : " << lastOccurrenceOfZero << endl;
    }

    int firstOccurrenceOfOne = findFirstOccurrenceOfOne(arr, n);
    int lastOccurrenceOfOne = findLastOccurrenceOfOne(arr, n);

    if (firstOccurrenceOfOne == -1 || lastOccurrenceOfOne == -1) {
        cout << "1 Not found";
    } else {
        cout << "First of One is at : " << firstOccurrenceOfOne << endl;
        cout << "Last of One is at : " << lastOccurrenceOfOne << endl;
    }

    return 0;
}