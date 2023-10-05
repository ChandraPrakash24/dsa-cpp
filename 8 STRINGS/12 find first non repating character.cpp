#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the first non-repeating character in a string
char firstNonRepeatingCharacter(string s) {
    sort(s.begin(), s.end()); // Sort the characters in the string in ascending order

    // int 





























    // int count = 0; // Initialize count to keep track of the frequency of each character
    // char prev = '\0'; // Initialize prev to keep track of the previous character

    // // for(auto c : s) cout<<c;//output

    // // Loop through each character in the sorted string
    // for (char c : s) {
    //     if (c != ' ') { // Ignore spaces
    //         if (c == prev) { // If the current character is the same as the previous character
    //             count++; // Increment the count
    //         } else { // If the current character is different from the previous character
    //             if (count == 1) { // If the previous character has a count of 1
    //                 return prev; // Return the previous character as it is the first non-repeating character
    //             }
    //             prev = c; // Update the previous character
    //             count = 1; // Reset the count for the new character
    //         }
    //     }
    // }

    // if (count == 1) { // If the last character has a count of 1
    //     return prev; // Return the last character as it is the first non-repeating character
    // }

    // return '\0'; // If no non-repeating character is found, return null character
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Use getline to read the whole line including spaces

    char result = firstNonRepeatingCharacter(s); // Find the first non-repeating character in the string

    if (result != '\0') { // If a non-null character is found
        cout << "First non-repeating character: " << result << endl; // Output the first non-repeating character
    } else {
        cout << "No non-repeating character found" << endl; // Output message indicating no non-repeating character is found
    }

    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// // Function to find the first non-repeating character in a string
// char firstNonRepeatingCharacter(string s) {
//     sort(s.begin(), s.end()); // Sort the characters in the string in ascending order

//     int count = 0; // Initialize count to keep track of the frequency of each character
//     char prev = '\0'; // Initialize prev to keep track of the previous character

//     // Loop through each character in the sorted string
//     for (char c : s) {
//         if (c == prev) { // If the current character is the same as the previous character
//             count++; // Increment the count
//         } else { // If the current character is different from the previous character
//             if (count == 1) { // If the previous character has a count of 1
//                 return prev; // Return the previous character as it is the first non-repeating character
//             }
//             prev = c; // Update the previous character
//             count = 1; // Reset the count for the new character
//         }
//     }

//     if (count == 1) { // If the last character has a count of 1
//         return prev; // Return the last character as it is the first non-repeating character
//     }

//     return '\0'; // If no non-repeating character is found, return null character
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     char result = firstNonRepeatingCharacter(s); // Find the first non-repeating character in the string

//     if (result != '\0') { // If a non-null character is found
//         cout << "First non-repeating character: " << result << endl; // Output the first non-repeating character
//     } else {
//         cout << "No non-repeating character found" << endl; // Output message indicating no non-repeating character is found
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int findFirstNonRepatingChar(string s)
// {
//     map<char,int> fm;

//     // Count the frequency of each character
//     for(auto& i : s ) fm[i]++;

//     // travers on the string and chech that this word is == 1in freqmap or not
//     for(auto& i : s )
//         if(fm[i] == 1) return i;


// return 0;
// }

// int main()
// {
//     string s;    cin>>s;

//     char result = findFirstNonRepatingChar(s);

//     if(result != '\0') cout<<result<<endl;
//     else cout<<"NULL"<<endl;

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;   cin>>s;

//     sort(s.begin(),s.end());

//     int i=0,c=1;
//     while(i < s.length() - 1)
//     {

//         if(s[i] == s[i+1]){ c++; i++; continue; }
        
//         if(c > 0)
//         {
//             cout << s[i];
//             break;  
//         }
//         c=0; i++;
//     }

//     // Check for last character
//     if (i == s.length() - 1 && c == 0)
//     {
//         cout << s[i];
//     }
    
//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// char firstNonRepeatingCharacter(string s) {
//     unordered_map<char, int> charFreq;
    
//     // Count the frequency of each character
//     for (char c : s) {
//         charFreq[c]++;
//     }
    
//     // Find the first non-repeating character
//     for (char c : s) {
//         if (charFreq[c] == 1) {
//             return c;
//         }
//     }

//     return '\0'; // Return null character if no non-repeating character found
// }

// int main() {
//     string s; 
//     cin >> s;
    
//     char result = firstNonRepeatingCharacter(s);
    
//     if (result != '\0') {
//         cout << result << endl;
//     } else {
//         cout << "No non-repeating character found" << endl;
//     }
    
//     return 0;
// }