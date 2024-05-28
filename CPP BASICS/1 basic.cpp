#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0; cin>>n;

    if (n == 0) {
        cout<<"only one digit that is : "<<n<<endl;
        return 0;
    }
    while(n != 0){
        cout<<"Last digit is : "<<n%10<<endl;
        cnt++;
        n /= 10;
    } 
    
    cout<<"No of digit Count is "<<cnt<<endl;

    // cout<<n;

    return 0;
}