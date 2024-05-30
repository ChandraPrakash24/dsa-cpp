// Roap Cutting (recursion)

#include <iostream>
using namespace std;

int maxPieces(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return -1;

    int temp1 = maxPieces(n-a,a,b,c);
    int temp2 = maxPieces(n-b,a,b,c);
    int temp3 = maxPieces(n-c,a,b,c);

    int pieces = max(max(temp1,temp2),temp3);

    if(pieces == -1) return -1;

    return pieces+1;

}

int main()
{
    // cout<<maxPieces(15,5,8,7); // 3
    cout<<maxPieces(23,12,14,11); // 2
    return 0;
}