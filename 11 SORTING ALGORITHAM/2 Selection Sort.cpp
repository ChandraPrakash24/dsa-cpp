// O n       O 1
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v, unsigned int n){
    for(unsigned int i=0;i<n;i++){
        auto min = min_element(v.begin()+i,v.end());
        if(v[i] >= *min) swap(v[i],*min);
    }
}

int main()
{
    int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i;

    selectionSort(v,n);

    for(auto& i : v)  cout<<i<<" "; 
    
    return 0;
}
