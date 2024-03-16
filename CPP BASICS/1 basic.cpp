/* why cpp
- efficent and spawnlp
- most popular
- poweful liberary STL
- cpp > java > python > js


Q. why cpp is fast?
- its is a compilation language (copmile time is not counted ony run time is sounted) whwre is suppose in js it is interprited so it is counted as rountime

CONSTAINTS

Integer constants: 4 , 62, -90
Decimal constants: 4.2 , 3.14, 0.33390, -2.2
Character constants: 'f', '5', '~', '\n' 
String literals: "Hello :D", "MyP@ssword123!", "a", "1"


endl or '\n'
'\' backslash is a escape character (escape this (during parshing) and consider next char)


ARETHEMATIC OPERATOR

( cpp follow bodmas rule)

=,-,*,/,% 

ex:-
10 / 3 = 3
10.3 / 3 = 3.3333
10 / 3.0 = 3.3333
10.3 / 3.0 = 3.3333

14 % 3 = 2
14.0 % 3 = 2 [err] // expression must have integral or unscoped enum type
(double)14 % 3 [err]


/ quitent
5  reminder

cout<<'f'; // f
cout<<(int)'f'; // 102
cout<<'f'+1; // 103
cout<<(char)('f'); // g
cout<<(char)('f' + 1); // g


cout<<'dhlks'; //6251387 (garabge value or UD or un defined or un valid~UV)


NOTE: character --> int
      int --x char

datatype var_name = value; (case sensative)

DATATYPE

- primitive
    int,char,bool,float(double,long double),void
- derived
    string,vector,map,set,priority_queue


x += 5; // x = x + 5;


!(a == b) is equal to a != b 

*/

// F. Digits Summation
// time limit per test
// 0.25 seconds
// memory limit per test
// 64 megabytes
// input
// standard input
// output
// standard output

// Given two numbers N and M. Print the summation of their last digits.
// Input

// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).
// Output

// Print the answer of the problem.
// Example
// Input
// Copy

// 13 12

// Output
// Copy

// 5

// Note

// First Example :

// last digit in the first number is 3 and last digit in the second number is 2.

// So the answer is: (3 + 2 = 5)




#include<iostream>
using namespace std;

int main()
{

    int a,b; cin>>a>>b;

    cout<< (a%10) + (b%10) << endl;    

    // int lastOne = a%10;
    // int lastTwo = b%10;

    // cout<<lastOne + lastTwo << "\n";
    
}