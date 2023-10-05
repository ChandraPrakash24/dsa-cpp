#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);

}

int main()
{
    cout<<factorial(5); 
    


    return 0;
}

// #include<iostream>
// using namespace std;

// int factorial(int x){

//     //base case
//     if (x==0)
//     {
//         return 1;
//     }
//     // else
//     // {
//     //     return x * factorial(x-1);
//     // }

//     //                OR

//     int smallerProblem = factorial(x-1);
//     int bigerProblem = x * smallerProblem;

//     return bigerProblem;
    
// }

// int main()
// {
//     int n;
//     cin>>n;

//     cout<<"factorial of "<<n<<" is: "<<factorial(n)<<endl;
//     return 0;
// }