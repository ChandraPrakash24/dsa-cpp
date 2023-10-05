            // kardana aligo


#include<bits/stdc++.h>
using namespace std;

int tastiness(vector<int> v){
    int mx=v[0];
    int subarraySum = 0;
    for(auto& i : v){
        if(subarraySum < 0) subarraySum = 0;
        mx = max(mx, subarraySum += i);
    }
    return mx;
}

int main()
{
    int n; cin>>n; vector<int> v(n); for(auto& i : v)  cin>>i;

    cout<<tastiness(v);

    return 0;
}










        //    DP



// #include<bits/stdc++.h>
// using namespace std;

// int maxTastiness(vector<int> v, int n){
//     int tempMax = v[0], globalMax=v[0];

//     for(unsigned int i=1;i<v.size();i++){
//         tempMax = max(v[i], tempMax + v[i]);
//         globalMax = max(tempMax,globalMax);
//     }
//     return globalMax;
// }

// int main()
// {
//     int n; cin>>n; vector<int> v(n); for(auto& i : v) cin>>i;

//     cout<<maxTastiness(v,n);
    


//     return 0;
// }