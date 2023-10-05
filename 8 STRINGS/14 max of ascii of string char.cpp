// ex:  CD#34 --> 27
// any smallcase, uppercase, number, special character

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    int sum=0;
    for(auto& c : s){
        if(isdigit(c) || isspace(c)){ sum+=c-'0'; continue; }
        else{
            int ascii = static_cast<int>(c);
            int maxVal = 0;
            while(ascii>0){
                int digit = ascii%10;
                maxVal = max(maxVal,digit);
                ascii /= 10; 
            }
            sum += maxVal;
        }
    }  
    cout<<sum;

    
    


    return 0;
}