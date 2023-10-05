// o( n * log(n) )

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, tar;
    cin >> n >> tar;

    vector<int> arr(n); // create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int find = tar - arr[i];
        int l = i + 1, r = n-1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] == find){
                cout<<"Present"<<endl;
                cout<<i<<" "<<mid;
                return 0;
            }else if(arr[mid] > find){ r = mid -1;}
            else l = mid + 1 ;
        }
    } 
    cout<<"Not Present"<<endl;
    


    return 0;
}