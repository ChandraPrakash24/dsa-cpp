#include<bits/stdc++.h>
using namespace std;

void printOdd(int s, int e){
    // if(s==e & 1 != 0 || s+1 == e & 1 != 0 ){ 
    // if(s >= e){
    if(s == e){
        if(e % 2 != 0) cout << e << endl;

        return;
    }else{

        if(e % 2 != 0) cout<<e<<endl; // 99to1

        printOdd(s, e-1);
        // if(e % 2 != 0) cout<<e<<endl; // 1to99
    }

}

int main()
{
    // printOdd(n,m); 
    printOdd(2,100); 
    // printOdd(1,n);   1 to n 

    return 0;
}