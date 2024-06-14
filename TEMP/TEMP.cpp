#include <iostream>
#include <string>
using namespace std;

void permutationWithSpaces(string str, string out) {
    // Base case: If the input string is empty, print the output
    if (str.empty()) {
        cout << out << endl;
        return;
    }


    // Include a space followed by the first character of the input string in the output
    permutationWithSpaces(str.substr(1), out + ' ' + str[0]);

    // Include only a space in the output
    permutationWithSpaces(str.substr(1), out + str[0]);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    permutationWithSpaces(input.substr(1), string(1, input[0]));

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// void solve(string i, string o){

//     if(o.length() == 0){
//         cout<<o<<endl;
//         return;
//     }

//     // string op1 = "", op2 = "";
//     // op1.push_back(' ');
//     // op1.push_back(i[0]);

//     // op2.push_back(i[0]);

//     string op1 = o + ' ' + i[0];
//     string op2 = o + i[0];

//     i.erase(i.begin() + 0);

//     solve(i, op1);
//     solve(i, op2);

//     return;

// }


// int main()
// {
//     string input; cin >> input;

//     string output = "";

//     output.push_back(input[0]);
//     input.erase(input.begin() + 0); 
    
//     solve(input,output);


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void permutationWithSpaces(string str, string out, int index){

//     if(index == 3){
//         cout<<out<<endl;
//         return;
//     }

//     return permutationWithSpaces(str.pop_back(), str + " " + str[0], index+1);
//     return permutationWithSpaces(str.pop_back(), str + str[0], index+1);
// }

// int main()
// {
//     permutationWithSpaces("ABC", "A", 1);    
    


//     return 0;
// }