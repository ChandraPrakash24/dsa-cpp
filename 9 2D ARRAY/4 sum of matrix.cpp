#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int matrix[n][m];

    for(auto& r : matrix) for(auto& e : r) cin>>e;

    int sum=0;

    for(int i=0; i< n * m; i++)
    {
        sum+= matrix[i / m][i % m];
    } 

    cout<<"Sum Is : "<<sum<<endl;
    cout<<"Sum Is : "<<sum/n*m<<endl; //AVERAGE
    


    return 0;
}