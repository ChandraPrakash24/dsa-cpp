#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0; s1[i]!='\0'; i++)
    {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}


int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    if(isAnagram(s1,s2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}





//                       USING MAP

// #include<bits/stdc++.h>
// using namespace std;


// bool isAnagram(string s1,string s2){

//     // if(s1.size() != s2.size()) return false;
//     if(s1.length() != s2.length()) return false;



//     map<char,int> fm1, fm2;

//     // map<int, int>::iterator it = m.begin();

//     // while(it != m.end())
//     // {

//     // }


//     for(char& ch : s1)
//         fm1[ch]++;

//     for(char& ch : s2)
//         fm2[ch]++;


//     return fm1 == fm2;

// }


// int main()
// {

//     string s1, s2;
//     getline(cin,s1);
//     getline(cin,s2);

//     if(isAnagram(s1,s2)) cout<<"Yes"<<endl;
//     else cout<<"No"<<endl;

//     return 0;

// }