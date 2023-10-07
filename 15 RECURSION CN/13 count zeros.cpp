#include<bits/stdc++.h>
using namespace std;

int cnt=0;

int countZeros(int n){
    // base cases
    string numberStr = to_string(n);
    if(numberStr.length() == 0) return (cout<<numberStr.length()<<"this hit",cnt);
    
    // Base case: When n becomes 0, return 1 as it has one zero.
    if (n == 0 && numberStr.length() == 1 ) return 1;

    // Base case: When n has only one digit and it's not 0, return 0.
    if (n < 10 && n != 0) return cnt;

    // Extract the last digit.
    int lastDigit = n % 10;
    cout<<lastDigit<<endl;

    // Count the number of zeros in the remaining digits.
    int restCount = countZeros(n / 10);

    // Recursive call.
    if (lastDigit == 0) return restCount + 1;
    else return restCount;

}

int main()
{
    int n; cin>>n;

    cout<<countZeros(n);
   
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int countZeros(int n, int cnt){
//     // base cases
//     string numberStr = to_string(n);
//     if(numberStr.length() == 1) return (cnt,cnt);
    
//     // Base case: When n becomes 0, return 1 as it has one zero.
//     if (n == 0) return 1;

//     // Base case: When n has only one digit and it's not 0, return 0.
//     if (n < 10 && n != 0) return 0;

//     // Extract the last digit.
//     int lastDigit = n % 10;

//     // Recursive call.
//     if (lastDigit == 0) return countZeros(n / 10, cnt + 1);
//     else return countZeros(n / 10, cnt);

// }

// int main()
// {
//     int n; cin>>n;
//     int cnt=0;
//     cout<<countZeros(n,cnt);
   
//     return 0;
// }