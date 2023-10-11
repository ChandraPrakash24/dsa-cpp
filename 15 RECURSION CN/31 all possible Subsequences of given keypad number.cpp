#include<bits/stdc++.h>
using namespace std;

string getNumpadCharacters(int d) {
    switch (d) {
        case 2:
            return "abc";
        case 3:
            return "def";
        case 4:
            return "ghi";
        case 5:
            return "jkl";
        case 6:
            return "mno";
        case 7:
            return "pqrs";
        case 8:
            return "tuv";
        case 9:
            return "wxyz";
        default:
            return " ";
    }
}

int main()
{
        
    


    return 0;
}

//     SECOND ATTEMPT

// #include<bits/stdc++.h>
// using namespace std;

// string getNumpadCharacters(int d) {
//     switch (d) {
//         case 2:
//             return "abc";
//         case 3:
//             return "def";
//         case 4:
//             return "ghi";
//         case 5:
//             return "jkl";
//         case 6:
//             return "mno";
//         case 7:
//             return "pqrs";
//         case 8:
//             return "tuv";
//         case 9:
//             return "wxyz";
//         default:
//             return " ";
//     }
// }

// int keypAllSubsequences(int n, string out[]) {
//     if (n == 0) {
//         out[0] = "";
//         return 1;
//     }

//     int smallNoOfSubsequences = keypAllSubsequences(n / 10, out);
//     int lastDigit = n % 10;
//     string s = getNumpadCharacters(lastDigit);

//     int writingIndex = 0;
//     for (int i = 0; i < s.length(); i++) {
//         for (int j = 0; j < smallNoOfSubsequences; j++) {
//             out[writingIndex++] = s[i] + out[j];
//         }
//     }

//     return smallNoOfSubsequences * s.length();
// }

// int main() {
//     int n;
//     cin >> n;
//     string* out = new string[1000];

//     int noOfSubsequences = keypAllSubsequences(n, out);

//     for (int i = 0; i < noOfSubsequences; i++) {
//         cout << out[i] << endl;
//     }

//     return 0;
// }


//     FIRST ATTEMPT


// #include<bits/stdc++.h>
// using namespace std;

// string getNumpadCharacters(int d) {
//     switch (d) {
//         case 2:
//             return "abc";
//         case 3:
//             return "def";
//         case 4:
//             return "ghi";
//         case 5:
//             return "jkl";
//         case 6:
//             return "mno";
//         case 7:
//             return "pqrs";
//         case 8:
//             return "tuv";
//         case 9:
//             return "wxyz";
//         default:
//             return " ";
//     }
// }

// int keypaddAllsubsequence(int n,string out[]){

//     if(n == 0){
//         out[0] = "";
//         return 1;
//     }

//     int nn = n;
//     int smallNoOfSubsequences = keypaddAllsubsequence(nn/10,out);
//     int lastDigit = n%10;

//     int writingIndex = smallNoOfSubsequences;

//     string s = getNumpadCharacters(lastDigit);

//     int loopCount = s.length();
//     //       OR
//     // int loopCount;
//     // if(lastDigit == 7 || lastDigit == 9){
//     //     loopCount = 4;
//     // }else{
//     //     loopCount=3;
//     // }

//     for(int i=0;i<loopCount;i++){
//         for(int j=0;j<smallNoOfSubsequences;j++){
//             out[writingIndex++] = s[i] + out[j];
//         }
//     }

//     return smallNoOfSubsequences * loopCount;

// }

// int main()
// {
//     int n;   cin>>n;
//     // int size;
//     // if(n==7 || n==9) 

//     string* out = new string[1000];


//     int noOfSubsequences = keypaddAllsubsequence(n,out); 
    
//     for(int i=0;i<noOfSubsequences+3;i++){
//         cout<<out[i]<<endl;
//     }


//     return 0;
// }