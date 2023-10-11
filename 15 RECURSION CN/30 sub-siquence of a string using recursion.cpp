#include<bits/stdc++.h>
using namespace std;

int subSiquence(string s,string out[]){
    if(s.empty()){
        out[0] = "";
        return 1;
    }

    int smallOutSize = subSiquence(s.substr(1),out);
   // Read and write variables for the out array
    int readIndex = smallOutSize;
    int writeIndex = 0;

    for (int i = 0; i < smallOutSize; i++) {
        out[readIndex++] = s[0] + out[writeIndex++];
    }
    return smallOutSize * 2;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string* out = new string[(1 << n)]; 


    int outputArraySize = subSiquence(s,out);
    
    for(int c=0;c<outputArraySize;c++)
    {
        cout<<out[c]<<" ";
    }

    delete[] out;

    return 0;
}