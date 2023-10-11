#include<bits/stdc++.h>
using namespace std;

int subSequence(string inputString,string outputArray[]){
    // base case
    if(inputString.empty()){
        outputArray[0]="";
        return 1;
    }

    //process call for substring for its subsiquenece to fill in ouput array
    // and get the size of that output array
    int outputArraySize = subSequence(inputString.substr(1), outputArray);

    // now adding orignal (caller) substring 0th characer to the substringed string's 
    // output array curently [ ,c,b,bc]
    int writingIndex = outputArraySize;
    for(int readingIndex = 0; readingIndex<outputArraySize; readingIndex++){
        outputArray[writingIndex++] = inputString[0] + outputArray[readingIndex];
    }

    // returning the output array size which is doubled now after adding inputSTring[0]
    // to all sub sequences; currently outputArray: [ ,c,b,bc,a,ac,ab,abc] for "abc"
    return outputArraySize * 2;

}

int main()
{
    string inputString;  cin>>inputString;
    int n = inputString.length();

    // dynamic string array with 2^n size
    string* outputArray = new string[(1 << n)]; 

    // outputArraySize coz array don't have any length function
    int outputArraySize = subSequence(inputString,outputArray);

    // printing finaly modifyed array
    // this line wait till last waiting for above line's output e.g., outputArraySize
    // coz [this needs to know outputArraySize size and also to print it at last]
    // (this is the last thing that runs after complition aff all recursive call)
    for(int c=0; c<outputArraySize; c++) {
        cout<<outputArray[c]<<endl;
    }

    return 0;
}

// OUTPUT
// abc <-- input string
//     <-- output's empty string
// c
// b
// bc
// a
// ac
// ab
// abc