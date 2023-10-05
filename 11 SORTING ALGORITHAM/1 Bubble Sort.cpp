// O n       O 1


// #include<bits/stdc++.h>
// using namespace std;


// void bubbleSort(vector<int>& v){

//     unsigned int c= 1;
//     while(c++<v.size()){
//     for(unsigned int i=0;i<v.size()-1;i++){
//         if(v[i+1] <= v[i] ) swap(v[i],v[i+1]);
//     } // c++;
//     }
// }

// int main()
// {
//     int n; cin>>n; vector<int> v(n); for(auto& i : v)  cin>>i;

//     bubbleSort(v);

//     for(auto& i : v) cout<<i<<" "; 
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v, unsigned int c){
    if(c == v.size() * v.size()) return;

    if(v[c % v.size()] > v[(c + 1) % v.size()]) 
        swap(v[c % v.size()], v[(c + 1) % v.size()]);

    bubbleSort(v, c + 1);

}

int main()
{
        int n; cin>>n; vector<int> v(n); for(auto& i : v)  cin>>i;

    bubbleSort(v,0);

    for(auto& i : v) cout<<i<<" "; 
    
    return 0;
     
    


    return 0;
}