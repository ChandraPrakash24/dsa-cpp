#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n; cin>>n; char arr[n]; for(char& i : arr) cin>> i;
    // for(char& i : arr) cout<< i;

    // cout<<arr[6]<<"world";



    // char string[10];
    // cin>>string;
    // cout<<string;


    string s;
    // cin>>s;

    getline(cin,s);

    // cout<<s;

    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == ' ') cout<<"yes";
        else cout<<"No";
        // cout<<s[i];

    }






    return 0;
}