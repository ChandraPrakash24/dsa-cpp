//      APROACH :1
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i; 
//     map<int,int> mp; // o (n * log n)
//     unordered_map<int,int> mp; // O (n) // space : o(n)
    
//     for(auto& i : v){
//         if(mp.count(i) > 0) return (cout<<i<<endl , cout << i << endl, 0);
//         else mp[i]++;
//     }
//     return 0;
// }

//     APROACH : 2

// TC: O(n)   SP: O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i; 
    
    for(int i=0;i<n;i++){
        if(v[v[i]-1] < 0) return( cout<<v[i]<<endl, 0);
        else v[i]*= -1;
    }
    cout<<-1;
    
    return 0;
}