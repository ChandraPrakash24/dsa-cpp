// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m;  cin>>n>>m;

//     int matrix[n][m];

//     for(auto& r : matrix) for(auto& e : r) cin>>e;

//     for(auto& r : matrix){
//         for(auto& e : r) cout<<e<<" ";
//         cout<<endl;
//     }


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;     cin>>n>>m;

    int matrix[n][m];

    for(auto& r : matrix) for(auto& e : r)  cin>>e;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(auto& r : matrix){
        for(auto& e : r) cout<<e<<" ";
        cout<<endl;
    } 
    


    return 0;
}