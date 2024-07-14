#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permute(string str, int i){

    if(i == str.length()-1){
        cout<<str<<endl;
        return;
    }

    for(int k = i; k<str.length();k++){
        swap(str[k],str[i]);
        permute(str,i+1);
        swap(str[k],str[i]);
    }

}

int main(){
    // string str = "AB"; // AB BA
    string str = "ABC";
    permute(str, 0);
}
//out:-
// ABC
// ACB
// BAC
// BCA
// CBA
// CAB
