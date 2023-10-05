
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string text, pattern;

//     getline(cin, text);
//     getline(cin, pattern);

//     vector<int> v;
//     // int start=0,end=0;
//     int text_size = int(text.size());
//     for(int i=0; i<text_size; i++){

//         if(text[i] == pattern[0])
//         {
//             v.push_back(i);
//             int teP=i+1; //text pointer
//             while (text[teP]!=pattern[pattern.size()-1])
//             {
//                 int pp=1; //patern pointer
//                 if(text[teP++] == pattern[pp++]) continue;
//                 else{
//                     // flag=0;
//                     v.pop_back();
//                     break;
//                 }
//             }
//             // v.pop_back();
//             // if(flag == 1) v.push_back(teP);
//             // else v.pop_back();
            
//         }



//     }


//     for(auto& i : v) cout<<i<<" ";

//             // t: eeeabcdeabc
//             // p: abc

//     return 0;

// }


// #include <iostream>
// #include <vector>
// #include <string>

// int main() {
//     std::string text, pattern;
//     std::getline(std::cin, text);
//     std::getline(std::cin, pattern);

//     std::vector<int> v;

//     for (int i = 0; i <= text.length() - pattern.length(); i++) {
//         bool match = true;
//         for (int j = 0; j < pattern.length(); j++) {
//             if (text[i + j] != pattern[j]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match) {
//             v.push_back(i);
//             v.push_back(i + pattern.length() - 1);
//         }
//     }

//     for (int i : v) {
//         std::cout << i << " ";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string text, pattern;

//     getline(cin, text);
//     getline(cin, pattern);

//     vector<int> v;
//     // int start=0,end=0;
//     for(int i=0; i<text.length(); i++){
//         // if(text[i] == pattern[0]){ 
//         //     v.push_back(i);
//         //     int j=1;
//         //     if(text[i] == pattern[j++]) continue;
//         //     else if(text[++i] != pattern[pattern.length()-1]) break;
//         //     else v.push_back(i+1); 
//         // }

//             if(text[i] == pattern[0])  v.push_back(i);
//             if(text[i] == pattern[pattern.length()-1])  v.push_back(i);








//     }


//     for(auto& i : v) cout<<i<<" ";

//             // t: eeeabcdeabc
//             // p: abc

//     return 0;

// }


