#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i; cin>>i;

    char bufferArray [3333];

    itoa (i,bufferArray,10);
    cout<<"decimal: "<<bufferArray<<endl;
    itoa (i,bufferArray,16);
    cout<<"hexadeciml: "<<bufferArray<<endl;
    itoa (i,bufferArray,2);
    cout<<"binary: "<<bufferArray<<endl;
    itoa (i,bufferArray,8);
    cout<<"octadecimal: "<<bufferArray<<endl;
    itoa (i,bufferArray,32);
    cout<<"base 32: "<<bufferArray<<endl;

    return 0;
}


// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int i;
//     cin >> i;

//     cout << "decimal: " << i << endl;
//     cout << "hexadecimal: " << hex << i << endl;
//     cout << "binary: " << bitset<32>(i) << endl;
//     cout << "octal: " << oct << i << endl;
//     cout << "base 32: " << bitset<32>(i) << endl; // There is no built-in base 32 conversion in C++

//     return 0;
// }
