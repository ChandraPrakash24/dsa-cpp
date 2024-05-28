// is any set bit in a number and what is its position

#include <iostream>
using namespace std;

int main() {

    int n; cin>>n;

    if(!n) cout<<-1;

    int count=0;

    while(n){
        if((n & 1) == 0){
            count++;
            n = n >>1;
        }else if((n & 1)==1){
            count++;
            break;
        }
    }

    cout<<"Set bit at position : "<<count<<endl;

  return 0;
}
