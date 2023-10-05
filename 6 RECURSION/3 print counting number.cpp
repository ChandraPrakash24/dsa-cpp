
// MY WAY:

// #include<iostream>
// using namespace std;

// int print(int n){
//     if (n==1)
//         return 1;
//     cout<<n<<endl;
//     return print(n - 1);
    
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<endl;

//     cout<<print(n)<<endl;
//     return 0;
// }


// BABBAR WAY


#include<iostream>
using namespace std;

void print(int n){
    if (n==0)
    {
        return;
    }
            
    cout<<n<<endl;
    print(n - 1);
    cout<<n<<endl; // it just print reverse (1 to 5)
}


int main()
{
    int n;
    cin>>n;
    cout<<endl;

    print(n);
    return 0;
}