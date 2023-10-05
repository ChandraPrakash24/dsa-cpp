#include<bits/stdc++.h>
using namespace std;


int kadensAlgo(vector<int>& v, unsigned int n){
    int sum=0,ans=v[0];
    for(unsigned int i=1;i<n;i++){
        if(sum + v[i] < 0) {sum=0; continue;}
        // sum+= v[i];
        ans = max(ans, sum += v[i]);
    }
    return ans;
}

int main()
{
    int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i; 
    
    cout<<kadensAlgo(v,n);

    return 0;
}