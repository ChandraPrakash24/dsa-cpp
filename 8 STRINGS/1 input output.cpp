#include<iostream>
using namespace std;

bool checkPelendrome(char name[], int len){
    int s = 0, e = len-1;

    while(s<=e){
        if(name[s++] != name[e--]) return false;

    }
    return true;
}

void reverse(char name[], int len){
    int s = 0, e = len-1;        
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i = 0; name[i]!= '\0';i++){
        count++;
    }

    return count;
}


int main()
{
    char ch[20];  
    // string ch;     // ch andra
    
    cout<<"Enter yore name: "<<endl;
    cin>>ch;

    ch[2] = '\0';
    // getline>>(cin,ch);

    cout<<"youre name is: "<<endl;
    cout<<ch<<endl;


    int len = getLength(ch);
    cout<<"lengt is : "<<len<<endl;

    reverse(ch,len);
    cout<<"name is : "<<ch<<endl;

    cout<<checkPelendrome(ch,len)<<endl;

    return 0;
}