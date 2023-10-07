// WITH STRING

#include<bits/stdc++.h>
using namespace std;

string removeX(string s) {
    // Base case
    if (s[0] == '\0') {
        return ""; // Return an empty string when the input is empty.
    }

    // If the first character is 'x', skip it and call removeX with the rest of the string.
    if (s[0] == 'x') {
        return removeX(s.substr(1));
    } else {
        // If the first character is not 'x', keep it and call removeX with the rest of the string.
        return s[0] + removeX(s.substr(1));
    }
}

int main() {
    string s;
    cin >> s;

    cout << "Original Length: " << s.length() << endl;
    string result = removeX(s);
    cout << "Modified String: " << result << endl;
    cout << "Modified Length: " << result.length() << endl;

    return 0;
}


// // WITH CHARACTER ARRAY

// #include<bits/stdc++.h>
// using namespace std;

// void removeX(char s[]){
//     //base case
//     if(s[0] == '\0' ) return;

//     if(s[0] != 'x') removeX(s+1);
//     else{
//         int i=1;
//         for( ; s[i] != '\0'; i++){
//             s[i-1] = s[i];
//         }
//         s[i-1] = s[i]; // to copy the last null delimeter or character
//         removeX(s);
//     }

// }

// int main()
// {
//     char s[100]; cin>>s;

//     cout<<strlen(s)<<endl; 
//     removeX(s);
//     cout<<s<<endl;
//     cout<<strlen(s)<<endl; 
    
//     return 0;
// }