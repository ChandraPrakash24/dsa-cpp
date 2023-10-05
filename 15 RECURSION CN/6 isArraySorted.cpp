#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){
    // base case
    if(size == 0 || size == 1) return true;

    // just checking first two element or process
    if(arr[0] > arr[1]) return false; // KAAM

    // ME FIRST OR SECOND ELEMENT KO CHECK KR LETE HU; TO JOO BAKE BACHE 2ND OR 3RD AND SO ON (3RD TO 4TH ; 4TH TO 5TH ; ....) KO CHECK KRA KE LA DE

    // YHA UPPER KAHI BAAT HAR SUB ARRAY BOLEGA APNE NEXT CALL KO

    bool isSmallSorted = isSorted(arr + 1, size - 1); //CALL


    return isSmallSorted;
    //       OR
    // if(isSmallSorted) return true;
    // else return false;
}
//  In Above Function Apan ne pahale KAAM keya fir CALL iska ulta bhe kr sakte the pahle call fir kaam
int main()
{
    int n; cin>>n; int arr[n]; for(auto& i : arr) cin>>i;

    cout<<isSorted(arr,n);

    return 0;
}