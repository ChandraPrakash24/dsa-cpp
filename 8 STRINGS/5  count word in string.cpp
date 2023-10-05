#include<bits/stdc++.h>
using namespace std;

int countNoOfWord(string s)
{
    stringstream sObj(s);
    string wordTemp;
    int count=0;

    while(sObj >> wordTemp) count++;

    return count;
}

int main()
{
    string ch;
    getline(cin,ch);

    cout<<countNoOfWord(ch);

}


// #include <bits/stdc++.h>
// using namespace std;

// int countWord(string s)
// {
//     int GlobalCount = 0,count=1,temp = 0;
//     for (int i = 0; s[i]!='\0'; i++)
//     {
//         if (s[i] == ' ' || s[i] == '\t'){
//             count = 0;
//         }else{
//             count++;
//             temp = temp + 1;
//         }
//         // else if(s[i] == ' ' )
//         // {
//         //     int count = 0, temp = -1;
//         //     count++;
//         //     temp++;
//         //     GlobalCount = count - temp;
//         //     continue;
//         // }
//     }
//     // cout<<count-1<<endl;
//     return count - temp;
// }

// int main()
// {
//     string s;
//     getline(cin, s);

//     cout << countWord(s) << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int countWord(string c)
// {
//     int space=0;
//     for(int i=0; c[i]!='\0'; i++)
//     {

//         if(c[i] == ' ')   space++;
//     }
//     return space+1;
// }

// int main()
// {
//     string s;
//     getline(cin,s);

//     cout<<countWord(s)<<endl;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cctype>

// int countWord(const std::string& str) {
//     std::string trimmed = str;

//     // Remove leading spaces
//     trimmed.erase(trimmed.begin(), std::find_if(trimmed.begin(), trimmed.end(), [](int c) { return !std::isspace(c); }));

//     // Remove trailing spaces
//     trimmed.erase(std::find_if(trimmed.rbegin(), trimmed.rend(), [](int c) { return !std::isspace(c); }).base(), trimmed.end());

//     int space = 0;
//     for (const char& c : trimmed) {
//         if (c == ' ') {
//             space++;
//         }
//     }

//     return space + 1;
// }

// int main() {
//     std::string input;
//     std::getline(std::cin, input);

//     std::cout << countWord(input) << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <sstream>

// int countWords(const std::string& str) {
//     std::istringstream iss(str);
//     std::string word;
//     int count = 0;

//     // Read words from the string
//     while (iss >> word) {
//         count++;
//     }

//     return count;
// }

// int main() {
//     std::string input;
//     std::getline(std::cin, input);

//     // Trim leading and trailing spaces if necessary
//     input.erase(0, input.find_first_not_of(' '));
//     input.erase(input.find_last_not_of(' ') + 1);

//     int wordCount = countWords(input);
//     std::cout << wordCount << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// int countWords(const std::string& str) {
//     int count = 0;
//     bool insideWord = false;

//     for (char c : str) {
//         if (std::isspace(c)) {
//             insideWord = false;
//         }
//         else if (!insideWord) {
//             insideWord = true;
//             count++;
//         }
//     }

//     return count;
// }

// int main() {
//     std::string input;
//     std::getline(std::cin, input);

//     // Trim leading and trailing spaces if necessary
//     input.erase(0, input.find_first_not_of(' '));
//     input.erase(input.find_last_not_of(' ') + 1);

//     int wordCount = countWords(input);
//     std::cout << wordCount << std::endl;

//     return 0;
// }