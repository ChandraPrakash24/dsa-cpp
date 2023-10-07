//  -----------   CONSICUTIVE DUPLICATES -----------

#include <iostream>
#include <cstring>
using namespace std;

// Recursive function to remove consecutive duplicates
void removeConsecutiveDuplicates(char arr[]) {
    if (arr[0] == '\0') {
        return; // If the input is empty or ends, terminate the recursion
    }

    // Check if the current character is the same as the next character
    if (arr[0] == arr[1]) {
        int i = 0;
        while (arr[i] != '\0') {
            arr[i] = arr[i + 1]; // Shift characters to the left to remove the duplicate
            i++;
        }
        removeConsecutiveDuplicates(arr); // Recurse to check the updated character
    } else {
        removeConsecutiveDuplicates(arr + 1); // Move to the next character
    }
}

int main() {
    char arr[] = "aaabbcccddeefff"; // Character array with consecutive duplicates

    cout << "Original Array: " << arr << endl;

    // Start the recursion to remove consecutive duplicates
    removeConsecutiveDuplicates(arr);

    cout << "Modified Array: " << arr << endl;

    return 0;
}




//         ----------- SET approach   ---------------


// #include<bits/stdc++.h>
// using namespace std;

// set<char> removeDuplicates(char s[]){
//     //base
//     if(s[0] == '\0') return;

//     //process
    

// }

// int main()
// {
//     char s[100]; cin>>s;

//     set<char> reult = removeDuplicates(s);

//     cout<<s; 
    


//     return 0;
// }

//        -----    NON CONSICUTIVE DUPLICATES -----------

// #include <iostream>
// #include <cstring>
// using namespace std;

// // Function to check if a character is already in the result string
// bool isDuplicate(char result[], char ch, int index) {
//     for (int i = 0; i < index; i++) {
//         if (result[i] == ch) {
//             return true; // Character is a duplicate
//         }
//     }
//     return false; // Character is not a duplicate
// }

// // Recursive function to remove duplicates and build a new string
// void removeDuplicates(char arr[], char result[], int currentIndex, int &resultIndex) {
//     // Base case: If we reach the end of the original string, terminate the result string.
//     if (arr[currentIndex] == '\0') {
//         result[resultIndex] = '\0';
//         return;
//     }

//     char currentChar = arr[currentIndex];

//     // Check if the current character is already in the result string (a duplicate)
//     if (!isDuplicate(result, currentChar, resultIndex)) {
//         // If not a duplicate, add it to the result string
//         result[resultIndex] = currentChar;
//         resultIndex++;
//     }

//     // Recursively process the next character in the original string
//     removeDuplicates(arr, result, currentIndex + 1, resultIndex);
// }

// int main() {
//     char arr[] = "aabbabacdeefghigklmnomn"; // Your character array
//     char result[100]; // To store the result

//     int resultIndex = 0; // Initialize the result index

//     // Start the recursion
//     removeDuplicates(arr, result, 0, resultIndex);

//     // Print the unique characters in the result string
//     cout << "Unique Characters: " << result << endl;

//     return 0;
// }
