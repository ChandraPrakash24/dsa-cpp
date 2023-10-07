#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string s){

    //base case
    if(s.empty() || s.length() == 1) return true;

    //process
    if(s.front() != s.back()) return false;

    //call
    isPalindrome(s.substr(1,s.length()-2)); // from index 1 to (7-2) 5 for a|bbabb|a --> ab|bab|ba --> abb|a|bba --> base case

}


int main()
{
    string s;  cin>>s;
    cout<<s.length()<<endl;
    if(isPalindrome(s)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    


    return 0;
}