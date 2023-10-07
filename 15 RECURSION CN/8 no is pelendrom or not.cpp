#include <iostream>
using namespace std;

bool isPalindrome(int n, int orignal, int& revirsed){
    //base case
    if(n==0) return orignal == revirsed;

    //process
    int lastDigit = n%10;

    revirsed = revirsed * 10 + lastDigit;

    //call
    isPalindrome(n/10,orignal,revirsed);


}

bool isPalindrome(int n){
    int revirsed = 0;
    isPalindrome(n,n,revirsed);
}

int main() {
    int num;  cin>>num;
    if (isPalindrome(num)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
