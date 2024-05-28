// is only one set bit in a number and what is its position

#include <iostream>
using namespace std;

int main() {

    int x=64,res=0;

    while(x >>= 1){
        res++;
    }
    cout<<"log2 "<<res<<endl;

  return 0;
}
